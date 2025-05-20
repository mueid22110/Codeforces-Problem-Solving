#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n, m;
	string x,s;

	cin>>n>>m>>x>>s;
	for(int i=0; i<6; i++){
		if(x.find(s) != string::npos){
			cout<<i<<endl;
			return;
		}else{
			x+=x;
		}
	}if(x.find(s) != string::npos){
		cout<<6<<endl;
	}else cout<<-1<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
	return 0;
}