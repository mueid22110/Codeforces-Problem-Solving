#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	int m = n;
	int b[n];
	for (int i = 0; i < n; i++){
		cin>>b[i];
		if(i>0 && b[i]<b[i-1]){
			m++;
		}
	}

	cout<<m<<endl<<b[0]<<" ";

	for(int i=1; i<n; i++){
		if(b[i]<b[i-1]){
			cout<<1<<" "<<b[i]<<" ";
		}else cout<<b[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}