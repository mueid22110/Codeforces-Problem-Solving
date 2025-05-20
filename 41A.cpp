#include<bits/stdc++.h>
using namespace std;
int main(){
	string a, b, c;
	cin>>a>>b;
	int n = a.length() - 1;
	int m = b.length();
	if(m == n+1){
		reverse(a.begin(), a.end());
		bool check = true;
		for(int i = 0; i<= n; i++){
			if(a[i] != b[i]){
				check = false;
				break;
			}
		}
		if(check == true){
			cout<<"YES"<<endl;
		}else cout<<"NO"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	
	

	return 0;
}