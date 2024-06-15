/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<char>dir(n);
    vector<int> x(n),y(n);
    for(int i=0;i<n;i++)
    
}*/
#include <bits/stdc++.h>
using namespace std;

const int N = 55;
int n;
char dir[N];
int x[N], y[N];
bool eat[N][N][2]; 
int ans[N];

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> dir[i] >> x[i] >> y[i];
    }
    for (int t = 1; t <= 1000000; ++t) { 
        memset(eat, false, sizeof(eat));
        bool flag = true;
        for (int i = 1; i <= n; ++i) {
            int nx = x[i], ny = y[i];
            if (dir[i] == 'E') {
                ++nx;
            } else {
                ++ny;
            }
            if (eat[nx][ny][dir[i] == 'E']) {
                ans[i] = -1;
                continue;
            }
            eat[nx][ny][dir[i] == 'E'] = true; 
            x[i] = nx, y[i] = ny; 
            if (nx > 1e9 || ny > 1e9) { 
                ans[i] = -2;
                continue;
            }
            flag = false; 
        }
        if (flag) { 
            break;
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (ans[i] == -1) {
            cout << "0\n";
        } else if (ans[i] == -2) {
            cout << "Infinity\n";
        } else {
            cout << x[i] + y[i] << '\n';
        }
    }
    return 0;
}

