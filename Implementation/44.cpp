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
cin>>t;
while(t--){ 

    int n;
    cin>>n;
   
    string s;
    cin>>s;
    int l=-1;
    int r=-1;

    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            l=i+1;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1'){
            r=i+1;
            break;
        }
    }

    int ans=n;
    if(l==-1){
        cout<<ans<<endl;
        continue;
    }
    int sum=0;

    sum = 2*(r-l+1);
    sum+=2*max((l-1)-1+1 , n-(r+1)+1);
    ans=max(ans,sum);

    cout<<ans<<endl;
}
return 0 ;
}