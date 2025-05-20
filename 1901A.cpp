#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;
	vector<int> gasPump(n);
	for (int i = 0; i < n; i++) {
		cin >> gasPump[i];
	}

	int fuel = gasPump[0]; 

	for (int i = 1; i < n; i++) {
		fuel = max(fuel, gasPump[i] - gasPump[i - 1]);
	}

	fuel = max(fuel, 2 * (x - gasPump[n - 1])); 

	cout << fuel << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
