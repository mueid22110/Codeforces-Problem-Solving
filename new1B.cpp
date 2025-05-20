#include <iostream>
using namespace std;

void solve() {
    int x;
    cin >> x;
    for (int y = x-1; y >=1; y--) {
        int z = x ^ y; 
        if (y + x > z && y + z > x && x + z > y) {
            cout << y << endl; 
            return;
        }
    }
        
    cout << -1 << endl;   
     
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
