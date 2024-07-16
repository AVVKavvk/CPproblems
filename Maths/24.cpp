#include<bits/stdc++.h>
using namespace std ; 
#define pi 3.14
#define fli(a,b) for(int i=a;i<b;i++)
#define flj(a,b) for(int j=a;j<b;j++)
#define flk(a,b) for(int k=a;k<b;k++)
#define ma(a,b)      ( (a) > (b) ? (a) : (b)); 
#define mi(a,b)      ( (a) < (b) ? (a) : (b)) ;
#define pb push_back 
#define pob pop_back 
#define sz size() 
#define p2s(a,b) std::cout <<a<<' ' << b << std::endl ;
#define pn(a) std::cout <<a << std::endl ;
#define nl std::cout << std::endl ;
#define p(a) std::cout <<a ;
#define ps(a) std::cout <<a<< ' ' ;
#define cig(arr,n)   cin.getline(arr,n) 
#define sza(a) sizeof(a)/sizeof(int)
#define vec vector<char> 
#define v2e vector <vector<int> > 
#define v2ec vector <vector<char> >
#define vei vector<int> 
#define pu(n) push_back( n); 
#define ll long long
#define limit(x) (x.begin(),x.end())


 

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE 
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif



int t=1;
// cin>>t;
while(t--){ 

    ll a,b,z;
    cin>>a>>b>>z;

    ll ans=0;
    ans+=a/z;
    ans+=b/z;
    ll rem1=a%z;
    ll rem2=b%z;
    ll mini=min(rem1,rem2);
    ll rem;

    // cout<<rem1<<" "<<rem2<<endl;
    // cout<<rem1+rem2<<endl;
    if(rem1==0 || rem2==0){
        rem=0;
    }
    else if(rem1+rem2<z){
        rem=0;
    }
    else{

    rem=z-max(rem1,rem2);
    }
    ans+=(rem1+rem2)/z;

    cout<<ans<<" "<<rem<<endl;
}
return 0 ;
}