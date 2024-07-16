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

    string s;
    cin>>s;

    vector<char>temp;

    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            int val=s[i]-'A';
            s[i]=val+'a';
        }
        // cout<<s[i]<<" ";
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o'&&s[i]!='u' && s[i]!='y'){
            temp.pb(s[i]);
            
        }
    }

    string ans="";
    for(auto i:temp){
        ans+='.';
        ans+=i;

    }

    cout<<ans<<endl;
}
return 0 ;
}