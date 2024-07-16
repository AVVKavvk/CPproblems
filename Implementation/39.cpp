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
#define p2s(a,b) cout <<a<<' ' << b << endl ;
#define pn(a) cout <<a << endl ;
#define nl cout << endl ;
#define p(a) cout <<a ;
#define ps(a) cout <<a<< ' ' ;
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
    bool inMiddle=true;

    for(int i=1;i<s.size();i++){
        if(islower(s[i])) {
            inMiddle=false;
        }
    }
    if(!inMiddle){
        cout<<s<<endl;
        return 0;
    }

    
    if(islower(s[0])){
        s[0]=toupper(s[0]);
        for(int i=1;i<s.size();i++) {
            s[i]=tolower(s[i]);
        }

        cout<<s<<endl;
        return 0;
    }

    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
    }    
    cout<<s<<endl;

}
return 0 ;
}




