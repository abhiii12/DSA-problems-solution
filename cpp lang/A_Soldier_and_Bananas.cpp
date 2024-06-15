#include<iostream>
using namespace std;
int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    int sum=k*(w*(w+1))/2;
    int money=sum-n;
    cout<<money<<endl;
    return 0;
}
