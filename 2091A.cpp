#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
    cin >> n;
    int a[n];
    // int date = 01032025;
    int cntZero = 3, cntOne = 1, cntTwo = 2, cntThree = 1, cntFive = 1;
    int res = 0;
    bool check = true;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        if(a[i] == 0 && cntZero != 0){
        	cntZero--;
        }else if(a[i] == 1 && cntOne != 0){
        	cntOne--;
        }else if(a[i] == 2 && cntTwo != 0){
        	cntTwo--;
        }else if(a[i] == 3 && cntThree != 0){
        	cntThree--;
        }else if(a[i] == 5 && cntFive != 0){
        	cntFive--;
        }
        if(cntZero == 0 && cntOne == 0 && cntTwo == 0 && cntThree == 0 && cntFive == 0){
        	check = false;
        	cout<<i+1<<endl;
        	return;        	
        }
        
    }

    cout<<0<<endl;
    

    
	
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
	return 0;
}