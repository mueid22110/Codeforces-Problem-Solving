

// https://codeforces.com/contest/2096/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	string s;
	cin>>n>>s;
	
	int out[n];

	int temp = n, temp2 = 1;

	for (int i = 0; i < n; i++){
		if(s[i]=='>'){
			out[i] = temp;
			temp--;
		}else{
			out[i] = temp2;
			temp2++;
		}
	}
	for(int i = n-1; i >= 0; i--){
		cout<<out[i]<<" ";
	}
	cout<<endl;
	
}

int main(){
	int t; cin>> t;
	while(t--){
		solve();
	}
	return 0;
}