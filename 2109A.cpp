#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, zeroCount = 0, oneCount = 0; 
	cin>>n;
	int a[n];
	bool check = true;
	
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		if(a[i]==0){
			zeroCount++;
			oneCount=0;
		}else {
			zeroCount=0;
			oneCount++;
		}
		if(oneCount==n || zeroCount>1){
			check = false;
			break;
		}

	}
	(check)?cout<<"NO"<<endl : cout<<"YES"<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}