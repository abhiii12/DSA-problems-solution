#include<bits/stdc++.h>
using namespace std;
class buiii
{
public:
  string buiiiname;
  int id;
void printname();
void printid()
{
    cout<<" Buiii id is :"<< id;
}
};
void buiii ::printname()
{
    cout << " buiii name is :"<< buiiiname ;
}
int main(){
    buiii obj1;
    obj1.buiiiname="I LOVE YOU";
    obj1.id = 9;
    cout<< endl;
    obj1.printid();
    obj1.printname();
    return 0;

}