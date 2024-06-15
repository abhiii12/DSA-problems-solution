#include<bits/stdc++.h>
using namespace std;
 class buiii
{
    public:
    int id;
   ~buiii()
   {
       cout<<"destructor called for id:"<<id <<endl;
   }
};
int main()
{
    buiii obj1;
    obj1.id=7;
    int i =0;
    while(i<6)
    {
        buiii obj2;
        obj2.id =i ; i++;
    }
    return 0;
}