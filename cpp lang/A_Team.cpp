#include <bits/stdc++.h>
using namespace std;

int n;
int ans = 0;

int main() {
    cin >> n;
    int p1, p2, p3;

    for (int i = 0; i < n; i++) {
        cin >> p1 >> p2 >> p3;
        if (p1 + p2 + p3 > 1) ans++;
    }
    cout << ans;
}

#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    int problem;
    int solved = 0;
    cin >> problem;
    bool p1, p2, p3;
    for ( int i = 0 ; i < problem ; i ++ ) {
        int know = 0;
        cin >> p1 >> p2 >> p3;
        if ( p1 == 1 ) {
            know++;
        }
        if ( p2 == 1 ) {
            know++;
        }
        if ( p3 == 1 ) {
            know++;
        }
        if ( know >= 2 ) {
            solved++;
        }
    }
    cout << solved << endl;
 
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b + c >= 2) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n , done=0;
    cin>>n;
    while(n){
        int p, v, t;
        cin>>p>>v>>t;
        if (p+v+t>=2)
        {
            done++;
        }
        n--;   
    }
    cout<<done<<endl;
    return 0;
}