#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<string> q;
    q.push("buiii");
    q.push("leima");
    q.push("abhiii");
    q.push("abhishek");
    q.push("love");
    while(!q.empty()){
    cout<< q.front()<<endl;
    q.pop();
    }
}