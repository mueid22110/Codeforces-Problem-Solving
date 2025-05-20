#include<iostream>
using namespace std;
int main(){
	long long num;
	int digit;
	digit = 0;
	cin>>num;
	while(num != 0){
		if(num%10 == 4 || num%10 == 7){
			digit++;
		}
		num/=10;
	}
	if(digit == 4 || digit == 7){
		cout<<"YES";
	}else{
		cout<<"NO";
	}


	return 0;
}