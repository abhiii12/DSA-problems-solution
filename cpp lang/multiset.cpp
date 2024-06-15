#include<iostream>
#include<iterator>
#include<set>

using namespace std;

int main()
{
    multiset<int,greater<int> > gquiz1;
    gquiz1.insert(37);
    gquiz1.insert(27);
    gquiz1.insert(93);
    gquiz1.insert(29);
    gquiz1.insert(64);

    gquiz1.insert(64);
    gquiz1.insert(10);

    multiset<int,greater<int> >::iterator itr;
    cout <<"\n The multiset gquiz1 is:\n";
    for(itr=gquiz1.begin(); itr != gquiz1.end(); ++itr){
        cout<<*itr<<" ";
    }
    cout << endl;
    multiset<int> gquiz2(gquiz1.begin(),gquiz1.end());
    cout<<"\nthe multiset gquiz2\n"
           "after assign from gquiz1 is :";
           for (itr=gquiz2.begin(); itr != gquiz2.end(); ++itr){
        cout << *itr <<" ";
    }
    cout << endl;
    cout<<"\ngquiz2 after removal\n"
           "of elements less than 30 : \n";
    gquiz2.erase(gquiz2.begin(),gquiz2.find(37));
    for(itr=gquiz2.begin(); itr != gquiz2.end(); ++itr){
        cout << *itr <<" ";
    }
    int num;
    num = gquiz2.erase(64);
    cout<<"\ngquiz.erase(64):\n";
    cout<< num <<"removed\n";
    for (itr =gquiz2.begin(); itr != gquiz2.end(); ++itr){
        cout<< *itr<<" ";
    }
    cout<< endl;
    cout<< "\ngquiz1.lower_bound(37):\n"
        << *gquiz1.lower_bound(37)<< endl;
    cout<< "\ngquiz1.upper_bound(37):\n"
         << *gquiz1.upper_bound(37)<< endl;

    cout<< "\ngquiz2.lower_bound(37):\n"
        << *gquiz2.lower_bound(37)<<endl;
    cout<< "\ngquiz2.upper_bound(37):\n"
        << *gquiz2.upper_bound(37)<< endl;
        return 0;
}