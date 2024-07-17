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
// vector<int> arr(n);
// fi(0,n) cin>>arr[i];
 
 vector<pair<string,int>>vec(n);
 unordered_map<string ,string>mpp;
 for(int i=0;i<n;i++){
    string s;
    cin>>s;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    string s1 = to_string(a)+" "+to_string(b)+" "+to_string(c)+" "+to_string(d);
    mpp[s]=s1;
    vec[i] = {s,a+b+c+d};
 }
 sort(limit(vec),[](pair<string,int>a,pair<string,int> b){
   if(abs(a.ss-b.ss)>10){
    return a.ss>b.ss?1:0;
   }
   string n1=a.ff;
   string n2=b.ff;
   int res=n1.compare(n2);
   if(res>0) return 0;
   return 1;
 });

 for(auto it:vec){
    cout<<it.ff<<" "<<it.ss<<" "<<mpp[it.ff]<<endl;
 }
// string s1="Karemo";
// string s2="Hussien";
//   int res=s1.compare(s2);

//   cout<<res;

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