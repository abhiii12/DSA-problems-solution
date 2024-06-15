/*#include<bits/stdc++.h>
using namespace std;
 int main(){
    int a,b,c,d;
    cin >>a>>b;
    cin >> c>>d;
     

     cout << max({a,b,c,d})- min({a,b,c,d})<<endl;
    
 }*/

/* #include<iostream>
using namespace std;
 
int main(){
    int clength(int a , int b, int c, int d ){
        int start = max(a,c)
        int end = min(b,d)
        if (start > end)
        return 0 ;
    }
    else {
        return end-start;
    }
    int main(){
        int a=3,b=5,c=7,d=5;
        cout<< "total length of fence painting"<< clength(a,b,c,d)<< endl;
        return 0;
    }
}*/

#include <iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin>> a >> b >> c>> d;

    int start = max(a,c);
    int end = min(b,d);
    int length = max(0,end-start);
    int totallength = (b-a) + (d-c) - length;

    cout << totallength << endl;
    return 0;

}