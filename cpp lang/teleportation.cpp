#include<bits/stdc++.h>
using namespace std;
 int main(){
    int  a,b,x,y;
    cin >>a>>b>>x>>y;
    
    int dist1=abs(b-a);
    int dist2=min(abs(a-y)+abs(b-x),abs(a-x)+abs(b-y));

    int best=min(dist1,dist2);
    cout<<best<<endl;
    return 0  ;
 }