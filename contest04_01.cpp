#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    long int input[n];
    long int output[n];

    for(int i = 0; i <n; i++){
        cin>>input[i];
        output[i] = sqrt(input[i]);
    }
    while(n--){
        cout<< output[n]<<endl;
    }

    return 0;
}