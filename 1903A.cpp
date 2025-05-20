#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> boxes(n);
    
    for (int i = 0; i < n; i++) {
        cin >> boxes[i];
    }

    if (k == 1) {
        
        if (is_sorted(boxes.begin(), boxes.end())) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        
        cout << "YES\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
