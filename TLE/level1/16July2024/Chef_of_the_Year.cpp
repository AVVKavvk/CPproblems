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
 int n,m;
 cin>>n>>m;
 map<string,string>mpp;
 map<string,int>mp;
 map<string,int>mp1;
 for(int i=0;i<n;i++){
    string s;
    string s2;
    cin>>s>>s2;
    mpp[s]=s2;
 }
 int maxi=0,maxi2=0;
 while(m--){
    string s;
    cin>>s;
    mp[s]++;
    mp1[mpp[s]]++;
    maxi2=max(maxi2,mp1[mpp[s]]);
    maxi=max(maxi,mp[s]);
 }
 string ans="";
 for(auto it:mp){
    if(it.second==maxi){
        ans=it.first;
        break;
    }
 }
 string ans1="";
 for(auto it:mp1){
    if(it.second==maxi2){
        ans1=it.first;
        break;
    }
 }
cout<<ans1<<endl<<ans<<endl;
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