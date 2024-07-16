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
#define limit(x) x.begin(),x.end()


ll bTD(){ string s;cin>>s;ll num=0;for(auto ch:s){if(ch=='1')num = num*2 + 1;else num=num*2;}return num;}; 
bool pOf2(ll num){if(num<=0) return false;if((num&(num-1))==0) return true;else return false;}
 

 

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

    int arr[n+1];
    for(int i=0;i<=n;i++)arr[i]=1;

    for(int i=2;i*i<=n;i++){
        if(arr[i]==1){
            for(int j=i*i;j<=n;j+=i){
                arr[j]=0;
                }
         }

    }

    for(int i=2;i<=n;i++){
        if(arr[i]==1)cout<<i<<" ";
    }


}
return 0 ;
}