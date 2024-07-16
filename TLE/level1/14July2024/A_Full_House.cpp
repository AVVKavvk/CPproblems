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

map<int,int>mpp;
int n=5;
while(n--){
    int x;
    cin>>x;
    mpp[x]++;
}

if(mpp.size()!=2){
    cout<<"No"<<endl;
    return 0;
}
else{
    vector<int>temp;
    for(auto it:mpp){
        temp.pb(it.second);
    }
    int a=temp[0];
    int b=temp[1];
    // cout<<a<<" "<<b;
    if(b>a) swap(a,b);
    
        if(a==3 && b==2){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    
}
}
return 0 ;
}