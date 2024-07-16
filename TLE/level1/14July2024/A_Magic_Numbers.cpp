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


ll bTD(){ string s;cin>>s;ll num=0;
for(auto ch:s){if(ch=='1')num = num*2 + 1;else num=num*2;}
return num;}; 
bool pOf2(ll num){if(num<=0) return false;if((num&(num-1))==0) return true;else return false;}
 

 

signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);



int t=1;
// cin>>t;
while(t--){ 
string s;
cin>>s;

int i=0;
int n=s.size();

while(i<n){

    string temp="";
    int k=0;
    int j=i;
    while(j<n && k!=3){
        temp+=s[j];
        j++;
        k++;
    }
    if(temp=="144"){
        i=i+3;
        continue;
    }
    k=0;
    j=i;
    temp="";
    while(j<n && k!=2){
        temp+=s[j];
        j++;
        k++;
    }
    if(temp=="14"){
        i=i+2;
        continue;
    }
    
    k=0;
    j=i;
    temp="";
    while(j<n && k!=1){
        temp+=s[j];
        j++;
        k++;
    }
    if(temp=="1"){
        i=i+1;
        continue;
    }
    else {
        NO;
        return 0;
    }

}
YES;

}


return 0 ;
}