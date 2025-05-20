#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>> n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		a[i]= abs(a[i]);
	}
	int k = sizeof(a) / sizeof(a[0]);

    sort(a, a + k);
	cout<<a[0]<<endl;
}