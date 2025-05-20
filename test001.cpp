#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n, m, l, r;
	cin>>n>>m>>l>>r;
	if(l!=0){
		m= n-m;
	}
	while(m!=0){
		l+=1;m-=1;
		if(m!=0){
			r-=1;m-=1;
		}
	}cout<<l<<" "<<r<<endl;
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