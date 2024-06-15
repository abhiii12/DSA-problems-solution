#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a = {1,2,3,4,6,7};
    for (int i = 0; i < a.size(); ++i)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    vector<int> :: iterator it;
    for (it = a.begin();it != a.end(); ++it)
    {
        cout << (*it) <<" ";
    } 
    for(int value : a) {
        cout << value << " ";
    }
    cout << endl;
    }
    

