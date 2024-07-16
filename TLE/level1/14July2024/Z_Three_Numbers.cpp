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
#define limit(x) x.begin(),x.end()


ll bTD(){ string s;cin>>s;ll num=0;
for(auto ch:s){if(ch=='1')num = num*2 + 1;else num=num*2;}
return num;}; 
bool pOf2(ll num){if(num<=0) return false;if((num&(num-1))==0) return true;else return false;}
 

 

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);




int t=1;
// cin>>t;
while(t--){ 
ll k,s;
cin>>k>>s;
ll ans=0;
fi(0,k+1){
    fj(0,k+1){
        ll z=s-(i+j);
        if(z>=0 && z<=k) ans++;
    }
}
cout<<ans<<endl;
}
return 0 ;
}