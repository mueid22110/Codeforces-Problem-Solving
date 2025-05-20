#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n, k;
    cin>>n>>k;
    int a[n];
    bool check = false;
    for (int i = 0; i < n; ++i){
        cin>>a[i];
        if(a[i] == k){
            check=true;
        }
    }
    check? cout<<"YES"<<endl : cout<<"NO"<<endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
