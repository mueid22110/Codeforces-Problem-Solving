#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
    cin >> n;
    int arr[n];
    unordered_set<int> unique_elements;
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        unique_elements.insert(arr[i]);
    }

    ((unique_elements.size() != n) || arr[0]!=1) ? cout<<"NO"<<endl : cout<<"YES"<<endl;
	
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
	return 0;
}