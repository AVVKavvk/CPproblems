#include<bits/stdc++.h>
using namespace std ; 
#define pi 3.14
#define fi(a,b) for(int i=a;i<b;i++)
#define fj(a,b) for(int j=a;j<b;j++)
#define fk(a,b) for(int k=a;k<b;k++)
#define pb push_back 
#define pob pop_back 
#define nl std::cout << std::endl ;
#define ll long long
#define int long long
#define limit(x) x.begin(),x.end()
#define YES cout << "YES\n";
#define Yes cout << "Yes\n";
#define NO cout << "NO\n";
#define No cout << "No\n";
#define endl '\n' 
#define mod 1000000007 


ll bTD(){ string s;cin>>s;ll num=0;
for(auto ch:s){if(ch=='1')num = num*2 + 1;else num=num*2;}
return num;}; 
bool pOf2(ll num){if(num<=0) return false;if((num&(num-1))==0) return true;else return false;}
 
 

void solve() {
 
 int sieve[1006];

 for(int i=2;i<=1000;i++){
    sieve[i]=1;
 }

 for(int i=2;i*i<=1000;i++){
    if(sieve[i]==1){
        for(int j=i*i;j<=1000;j+=i){
            sieve[j]=0;
        }
    }
 }

 int n;
 cin>>n;
 int k;
 cin>>k;
 vector<int>temp;

 for(int i=2;i<=n;i++){
    if(sieve[i]==1){
        temp.pb(i);
    }
 }

 int cnt=0;
 for(int i=1;i<temp.size();i++){
    int sum=temp[i]+temp[i-1]+1;
    if(sum<=n){
        if(sieve[sum]==1) cnt++;
    }
 }
 if(cnt>=k){
    YES;
 }
 else NO;

}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);



int t=1;
// cin>>t;
while(t--){ 


solve() ;
}
return 0 ;
}