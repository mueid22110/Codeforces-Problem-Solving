#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, sum = 0;
	cin>>n;
	for (int i = 1; i < n; ++i){
		int k;
		cin>>k;
		sum-=k;
	}
	cout<<sum<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}