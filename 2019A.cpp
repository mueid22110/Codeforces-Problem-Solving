#include<iostream>
using namespace std;

int maxFunc(int a, int b){
	return (a > b) ? a : b;
	}
int main(){
	int t ;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		int a[n], max = 0, count = 0, temp;
		for(int j =0 ; j < n ; j++){
			cin >> a[j];
		}

		for (int i = 0; i < n ; i++){
			if(i == 0 || a[i] > a[i-1]){
				max = maxFunc(max , a[i]);
				count++;
				i++;
			}
		}
		
		int final = max + count;
		cout << final << endl;
	}
	
}

