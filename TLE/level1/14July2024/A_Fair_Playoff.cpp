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
cin>>t;
while(t--){ 

int arr[4];
cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];

int maxi=0,secondMaxi=0;

for(int i=0;i<4;i++){
    if(arr[i]>maxi) {
        secondMaxi=maxi;
        maxi=arr[i];
    }
    else if(arr[i]>secondMaxi ){
        secondMaxi=arr[i];
    }
}

int f1=arr[0]>arr[1]?arr[0]:arr[1];
int f2=arr[2]>arr[3]?arr[2]:arr[3];

if(f1==maxi || f1==secondMaxi ){
    if(f2==maxi || f2==secondMaxi){
        cout<<"YES\n";
    }
    else 
    cout<<"NO\n";
}
else{
    cout<<"NO\n";
}



}
return 0 ;
}