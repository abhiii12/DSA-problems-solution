#include<iostream>
using namespace std;
class largest
{
    int a, b,  m;
    public:
    void set_data();
    friend void find_max(largest);
};
void largest::set_data()
{
     cout << "Enter the first no.:";
     cin>>a;
     cout<<"Enter the second no.:";
     cin>>b;}
     void find_max(largest t)
     {
         if(t.a>t.b)
        t.m=t.a;
        else
        t.m=t.b;
        cout <<"maximum no. is\t"<<t.m;}
        main ()
        {
        largest l;
        l.set_data();
        find_max(l);
        return 0; 
     }
        