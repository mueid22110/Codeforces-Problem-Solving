#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        ll k;
        cin >> n >> k;

        vector<ll> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        ll targetX = -1;
        bool valid = true;

        
        for (int i = 0; i < n; ++i) {
            if (b[i] != -1) {
                ll x = a[i] + b[i];
                if (targetX == -1)
                    targetX = x;
                else if (targetX != x) {
                    valid = false;
                    break;
                }
            }
        }

        if (!valid) {
            cout << 0 << '\n';
            continue;
        }

        if (targetX != -1) {
            
            for (int i = 0; i < n; ++i) {
                if (b[i] == -1) {
                    ll bi = targetX - a[i];
                    if (bi < 0 || bi > k) {
                        valid = false;
                        break;
                    }
                }
            }
            cout << (valid ? 1 : 0) << '\n';
        } else {
            
            ll low = 0, high = 1e18;
            for (int i = 0; i < n; ++i) {
                low = max(low, a[i]);
                high = min(high, a[i] + k);
            }

            if (low > high) cout << 0 << '\n';
            else cout << (high - low + 1) << '\n';
        }
    }

    return 0;
}
