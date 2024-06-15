/*#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	cout << v[-1];
}*/

/*#include <iostream>
using namespace std;

int res(int x) {
	if (x == 200000) return x;
	return res(x+1);
}

int main() {
	cout << res(0) << "\n";
}*/
/*#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
	int M, N;
	cin >> M >> N;
	int ans = 0;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		ans = (ans + x) % MOD;
		if (M == 1) {
			cout << ans << endl;
		}
	}
	if (M == 0) {
		cout << ans << endl;
	}
}*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x = 1 << 30;
	cout << x + x << endl;
}