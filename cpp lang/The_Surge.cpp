#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,u,l; cin>>n>>u>>l;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    vector<vector<int>>v(2, vector<int>(n,0));
    for(int i=0; i<n; i++){
        if(a[i]==2){
            v[0][i]=1;
            v[1][i]=1;
            u--,l--;
        }
    }
    for(int i=0; i<n; i++){
        if(a[i]==1){
            if(u>0){
                u--;
                v[0][i]=1;
            }
            else{
                v[1][i]=1;
                l--;
            }
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<n; j++)
        cout<<v[i][j]<<" \n"[j==n-1];
    }
}
