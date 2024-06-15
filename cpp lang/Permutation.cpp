#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n; cin>>n;
    vector<int>v,vis(n+1,0);
    for(int i=1;i<=n;i++){
      if(!vis[i]){
        for(int j=i;j<=n;j*=2){
            vis[j]++;
            v.push_back(j);
        }
      }
   }
   for(int i=0; i<v.size(); i++)
   cout<<v[i]<<" ";
   cout<<endl;
}

signed main(){
 int t;
 cin>>t;
 while(t--) solve();
      return 0;
  }