#include<bits/stdc++.h>
using namespace std ;
class beta 
{
    public:
    int id ;
    beta()  
    {
    cout<<"default constructor called"<<endl;
    id=-1;
    }
    beta (int x)
    {
    cout<< "parameterized constructor called "<< endl; 
    id= x;
    }
};
int main()
{
    beta obj1;
    cout<<"beta id is:"<<obj1.id<< endl;
    beta obj2(9);
    cout<< "beta id is:"<< obj2.id<<endl;
    return 0; 
}