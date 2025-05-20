#include<bits/stdc++.h>
using namespace std;
int main(){
	int stop, in , out;
	int stay= 0, max = 0;

	cin>>stop;
	while(stop--){
		cin>>out>>in;
		stay+= in;
		stay-=out;

		if(stay>max){
			max = stay;
			continue;
		}
	}
	cout<<max<<endl;

	return 0;
}