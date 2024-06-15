#include <bits/stdc++.h>
#define ll long long
#define INF LLONG_MAX
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll d[n], s[n], rez = INF;
        
        for (int i = 0; i < n; i++) {
            cin >> d[i] >> s[i];
        }
        
        for (int i = 0; i < n; i++) {
            if (s[i] >= 3) {
                if (s[i] % 2 == 1) {
                    rez = min(rez, d[i] + (s[i] / 2));
                } else {
                    rez = min(rez, d[i] + (s[i] / 2 - 1));
                }
            } else {
                rez = min(rez, d[i]);
            }
        }
        
        cout << rez << endl;
    }
    
    return 0;
}
