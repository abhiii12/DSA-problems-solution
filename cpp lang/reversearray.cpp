#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n], i;
    for(i=0;i<n;++i)
    cin >> a[i];

    int j=n-1;
        i=0;
        while (i<j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
        for(i=0;i<n;++i)
        cout<<a[i]<<" "<< endl;
        return 0;
}   
