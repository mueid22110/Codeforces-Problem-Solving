#include<iostream>
using namespace std;
int main(){
	int num, count, four, seven;
	count = 0;
	four = 0;
	seven = 0;
	cin>>num;
	if(num < 10){
		cout<<"NO";
	}else{
		while(num != 0){
			int rem = num%10;
		
			if(rem == 4){
			
				four++;
			
			}else if(rem == 7){
				seven++;

			}else{
				count++;
				break;
			}
			num/=10;
		}
		if(four>0 && count == 0){
			cout<<"YES";
		}else{
			cout<<"NO";
		}
	}

	return 0;
}