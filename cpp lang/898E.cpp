#include <bits/stdc++.h>

#define ll long long
#define maximum INT_MAX
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll m,y;
        cin>>m>>y;
        vector<ll>a(m);
        for(ll i=0;i<m;i++)
        {
            cin>>a[i];
        }
        ll left=1,right=maximum;
        ll ans= maximum;
        while(left<=right)
        {
            ll mid=(right-left)/2+left;
            ll res=0;
            for(ll &i:a)
            {
                if(mid>i){
                    res+=(mid-1);
                }
            }
            if(res<=y)
            {
                ans=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        cout<<ans<<endl;

    }
}