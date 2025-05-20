#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long len;
	string house;
	cin>>len>>house;
    long long up = count(house.begin(), house.end(), '-');
    long long low = len - up;
    long long price=(up/2)*(up- up/2)*low;
		
	cout<<price<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}