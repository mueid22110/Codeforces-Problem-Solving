#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	string cell;
	cin>>cell;
	int dot = 0;
	bool threeEmptyCell = false;
	for(int i = 0; i < n; i++){
		if((cell[i]=='.') && i+1<n && (cell[i+1]=='.') && (cell[i+2]=='.') && i+2 <n ){
			threeEmptyCell = true;
			break;
		}
		if(cell[i]=='.'){
			dot++; 
		}
	}
	if(threeEmptyCell){
		cout<<2<<endl;
	}else{
		cout<<dot<<endl;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}