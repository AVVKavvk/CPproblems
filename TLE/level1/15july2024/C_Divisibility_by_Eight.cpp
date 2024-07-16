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

for(int i=0;i<s.size();i++){

    if(s[i]=='8'||s[i]=='0'){
        YES;
        cout<<s[i]<<endl;
        return ;
    }
}

if(s.size()>=2){

    for(int i=0;i<s.size();i++){

        for(int j=i+1;j<s.size();j++){
            int temp=(s[i]-'0')*10+(s[j]-'0');
            if(temp%8==0){
                YES;
                cout<<temp<<endl;
                return ;
            }
        }
    }
}
if(s.size()>=3){

    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            for(int k=j+1;k<s.size();k++){
                int temp=(s[i]-'0')*100+(s[j]-'0')*10+(s[k]-'0');
                if(temp%8==0){
                    YES;
                    cout<<temp<<endl;
                    return ;
                }
            }
        }
    }
}

NO;

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