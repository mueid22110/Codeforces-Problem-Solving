#include<iostream>
#include<math.h>
using namespace std;
int main(){
   int N, M, Y, X;
   cin>>N>>M>>Y;
    for(int i = 0; i< M-1; i++){
        X = pow(i,N);
        if(X%M == Y){
            cout<<i;
        }
    }

    return 0;
}