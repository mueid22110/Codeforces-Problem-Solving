#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]<0){
            a[i] *= -1;
        }
    }
    if(n>1){
        int temp= a[0];
        int k= sizeof(a)/sizeof(a[0]);
        sort(a, a+n);
        if(a[n-1]==temp){
            cout<<"NO"<<endl;
        }else cout<<"YES"<<endl;

    }else cout<<"YES"<<endl;
}

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}