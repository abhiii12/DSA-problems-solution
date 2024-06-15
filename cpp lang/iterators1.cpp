#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair< string,string>> vector_pair = { {"leima", "abhishek"},{"buiii","abhiii"}};
     vector<pair< string,string>>::iterator it;
     for(it=vector_pair.begin(); it != vector_pair.end();++it){
            cout<< (*it).first<<" "<< (*it).second<< endl;}

    /*vector<int> v={2,4,6,8,0};
    for (int i=0; i < v.size(); ++i ){
        cout<< v[i]<<" ";
    }cout << endl;       
    vector<pair<int,int>> vector_pair = {{1,2},{3,4},{5,6}};
    vector<pair< int,int>>::iterator it;
    for(it=vector_pair.begin(); it != vector_pair.end();++it){
        cout<< (*it).first<<" "<< (*it).second<< endl;

    }*/    
}
