#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> s;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(9);
    while ( !s.empty())
    {
    cout<< s.top()<< endl;
    s.pop();  
    }

}