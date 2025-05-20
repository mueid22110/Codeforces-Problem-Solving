#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> res;

       
        for (int i = x; i < n; ++i)
            res.push_back(i);

       
        for (int i = 0; i < x; ++i)
            res.push_back(i);

        for (int i = 0; i < n; ++i)
            cout << res[i] << (i == n - 1 ? '\n' : ' ');
    }
    return 0;
}
