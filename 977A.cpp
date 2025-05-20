#include<iostream>
using namespace std;
int main(){
	int n, count;
	cin>>n>>count;
	for(int i =1; i<=count; i++){
		if(n%10 == 0){
			n /= 10;
		}else{
			n -= 1;
		}
	}cout<<n;


	return 0;
}