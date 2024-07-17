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
#define ff first
#define ss second
#define inf 1e7
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
int n; cin>>n;
int k; cin>>k;
vector<int> fruits(n);
fi(0,n) cin>>fruits[i];
  int ans=0;
        unordered_map<int,int>mpp;
        int l=0,r=0;
        while(r<n){
            mpp[fruits[r]]++;
            
            if(mpp.size()>k-1){
                mpp[fruits[l]]--;
                if(mpp[fruits[l]]==0){
                    mpp.erase(fruits[l]);
                }
                l++;
            }
            
            if(mpp.size()<=k-1){
                ans=max(ans,r-l+1);
            }
            r++;
        }
       cout<<ans<<endl;

}
signed main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);



int t=1;
cin>>t;
while(t--){ 


solve() ;
}
return 0 ;
}