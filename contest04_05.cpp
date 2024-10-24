#include<iostream>
using namespace std;
int main(){
    int n;
    while(cin>>n){
        int x = n/2 + n/3 + n/4;
        if(x > n){
            cout<<x;
        }else cout<<n;
    

    }
    return 0;
}