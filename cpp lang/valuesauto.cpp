#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector<int> v ={2,3,5,6,8};
    for(int i=0; i< v.size(); ++i){
        cout<< v[i]<< " ";
    }cout << endl;
    for(auto it = v.begin(); it != v.end(); ++it){
        cout<< (*it)<<" ";
    }
    auto a = 1;
    cout << a << endl;
   /* vector<int> :: iterator it;
    for(it = v.begin(); it != v.end(); ++it){
        cout<< (*it)<< " ";
    }vector<pair<int,int>> v_p = {{2,3},{4,6}};
    for(pair<int,int> &value : v_p){
        cout<< value.first << " "<< value.second<< endl;
    }
    for( int value : v){
        cout<< value << " ";
    }cout << endl;*/

}