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
 
int n;
cin>>n;

if(n<=9) {
    cout<<n<<endl;
    return ;
}
 auto Prod=[](int n){
    int ans=1;
    while(n>0){
        int digit=n%10;
        ans=ans*digit;
        n=n/10;
    }
    return ans;
 };

 int ans=0;
 int p=1;
 n=n+1;
 while(n>0){
    ans=max(ans,Prod(n*p-1));
    n/=10;
    p*=10;
 }
 cout<<ans<<endl;

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