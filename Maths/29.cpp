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
   int x,y;
   cin>>x>>y;
   int x1;
   cin>>x1;
   vector<int> arr1;
   while(x1--){
    int t;
    cin>>t;
    arr1.pb(t);
   }
   int x2;
   cin>>x2;
   vector<int> arr2;
   while(x2--){
    int t;
    cin>>t;
    arr2.pb(t);
   }

   int m1=abs(arr1[0]-arr1.back());
   int m2=abs(arr2[0]-arr2.back());

   ll maxi=max(m1,m2)*1ll*y;

   int y1;
   cin>>y1;
   vector<int> arr3;
   while(y1--){
    int t;
    cin>>t;
    arr3.pb(t);
   }
   int y2;
   cin>>y2;
   vector<int> arr4;
   while(y2--){
    int t;
    cin>>t;
    arr4.pb(t);
   }

   int m11=abs(arr3[0]-arr3.back());
   int m12=abs(arr4[0]-arr4.back());

   maxi=max(maxi,max(m11,m12)*1ll*x);

   cout<<maxi<<endl;




 

}
return 0 ;
}