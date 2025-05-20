#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, h;
	cin>>n>>h;
	
	int road = 0;
	int a[n];
	
	for(int i = 0; i< n ;i++){
		cin>>a[i];
		if(a[i]<= h){
			road++;
		}else{
			road+=2;
		}
	}
	cout<<road<<endl;


	return 0;
}