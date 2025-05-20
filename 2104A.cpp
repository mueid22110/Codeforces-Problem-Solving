#include <bits/stdc++.h>
using namespace std;
void solve(){
	long long a, b, c;
    cin >> a >> b >> c;
    long long sum = a + b + c;

    if (sum % 3 == 0 && b<=(sum/3)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}