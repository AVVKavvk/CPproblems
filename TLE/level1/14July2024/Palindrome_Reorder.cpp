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
 string s;
 cin>>s;

 map<char,int>mpp;
 for(auto ch:s){
    mpp[ch]++;
 }

 if(s.size()%2==0){

    bool f=1;

    for(auto it:mpp){
        if(it.second&1) {f=0;break;}
    }
    if(f==0){
        cout<<"NO SOLUTION\n";
        return ;
    }
    string ans="";
    for(auto it:mpp){
        int x=it.second/2;
        while(x--){
            ans+=it.first;
        }
    }
    cout<<ans;
    reverse(limit(ans));
    cout<<ans<<endl;

 }
 else{

    char ch;
    bool flag=1;
    int cnt=0;

    for(auto it:mpp){
        if(it.second&1){ cnt++;ch=it.first;}
        if(cnt>1){
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<"NO SOLUTION\n";
        return;
    }
    string ans="";

    for(auto it:mpp){
        int x=it.second/2;
        while(x--){
            ans+=it.first;
            }
         
    }

    cout<<ans<<ch;
    reverse(limit(ans));
    cout<<ans<<endl;
 }

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