#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void solve(int n, const string& s) {
    vector<int> result;
    stack<int> stk;

    for (int i = 0; i < n; ++i) {
        stk.push(i + 1);

        // Flush on '>' or at the end
        if (i == n - 1 || s[i] == '>') {
            while (!stk.empty()) {
                result.push_back(stk.top());
                stk.pop();
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << result[i] << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        solve(n, s);
    }
    return 0;
}
