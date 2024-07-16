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
 vector<int>a(n);
 fi(0,n) cin>>a[i];
 sort(limit(a));
 
 vector<int>b;
 int ans=a[0]*a[n-1];
 for(int i=2;i*i<=ans;i++){
    if(ans%i==0){
        b.pb(i);
        if(i!=(ans/i)){
            b.pb(ans/i);
        }
    }
 }
 sort(limit(b));
 
 if(a==b){
    cout<<ans<<endl;
 }
 else cout<<-1<<endl;
 
 
}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
 
 
int t=1;
cin>>t;
while(t--){ 
 
 
solve() ;
}
return 0 ;
}