#include<bits/stdc++.h>
using namespace std;
 int main(){
    int num[7];
    for (int i=0;i<7;i++)
   { cin>>num[i];
   }
   sort(num,num+7);
    int a =num[0];
    int b = num[1];
    int c=num[6]-a-b;
   
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
 }