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
// #ifndef ONLINE_JUDGE 
// freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
// #endif



int t=1;
// cin>>t;
while(t--){ 
    int n;
    cin>>n;

    for(int i=0;i<=n;i++){
        int spaces=n-i;
        for(int sp=0;sp<spaces;sp++){
            cout<<"  "; 
        }
        int total=2*i+1;
        int j=0;
        for(;j<=i;j++){
            if(j==0) cout<<j;
            else
           cout<<" "<<j;
        }
        for(int k=i-1;k>=0;k--){
            // if(k==i-1) cout<<k;
            // else
            cout<<" "<<k;
        }
        nl;
    }
    for(int i=n-1;i>=0;i--){
        int spaces=n-i;
        for(int sp=0;sp<spaces;sp++){
            cout<<"  "; 
        }
        int total=2*i+1;
        int j=0;
        for(;j<=i;j++){
            if(j==0)cout<<j;
            else
            cout<<" "<<j;
        }
        for(int k=i-1;k>=0;k--){
            // if(k==i-1) cout<<k;
            // else
            cout<<" "<<k;
        }
        nl;
    }
}
return 0 ;
}