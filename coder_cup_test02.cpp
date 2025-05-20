#include <iostream>
#include <algorithm>
using namespace std;

void sortRows(int arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        sort(arr[i], arr[i] + n); 
    }
}

    
int main() {
    int n;
    cin >> n;

    int arr2[100]; // Assuming max size is 100x100
	int arr[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            if(i==0){
            	arr2[j] = arr[i][j];
            } 
        }
    }

    sortRows(arr, n);
    bool res;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(arr[i][j]>n || arr[i][j]<1){
            	res = false;
            }else if(arr2[j] != arr[i][j]){
            	res = false;
            }else if(j>0 && arr[i][j] == arr[i][j-1]){
            	res = false;
            }else{
            	res = true;
            }
        }
    }
    cout<<res<<endl;
    

    return 0;
}
