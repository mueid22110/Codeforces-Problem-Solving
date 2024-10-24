#include<iostream>
using namespace std;
int main(){
    int a, b, c, res[9];
    cin>>a>>b>>c;
    res[0] = a + b + c;
    res[1] = a + b - c;
    res[2] = a + b * c;

    res[3] = a - b + c;
    res[4] = a - b - c;
    res[5] = a - b * c;

    res[6] = a * b + c;
    res[7] = a * b - c;
    res[8] = a * b * c;

    int output;
    if(      res[0] <= res[1] && res[0] <= res[2] && res[0] <= res[3] && res[0] <= res[4] && res[0] <= res[5] && res[0] <= res[6] && res[0] <= res[7] && res[0] <= res[8]){
            output = res[0];
    }else if(res[1] <= res[0] && res[1] <= res[2] && res[1] <= res[3] && res[1] <= res[4] && res[1] <= res[5] && res[1] <= res[6] && res[1] <= res[7] && res[1] <= res[8]){
            output = res[1];
    }else if(res[2] <= res[1] && res[2] <= res[0] && res[2] <= res[3] && res[2] <= res[4] && res[2] <= res[5] && res[2] <= res[6] && res[2] <= res[7] && res[2] <= res[8]){
            output = res[2];
    }else if(res[3] <= res[1] && res[3] <= res[2] && res[3] <= res[0] && res[3] <= res[4] && res[3] <= res[5] && res[3] <= res[6] && res[3] <= res[3] && res[3] <= res[8]){
            output = res[3];
    }else if(res[4] <= res[1] && res[4] <= res[2] && res[4] <= res[3] && res[4] <= res[0] && res[4] <= res[5] && res[4] <= res[6] && res[4] <= res[7] && res[4] <= res[8]){
            output = res[4];
    }else if(res[5] <= res[1] && res[5] <= res[2] && res[5] <= res[3] && res[5] <= res[4] && res[5] <= res[0] && res[5] <= res[6] && res[5] <= res[7] && res[5] <= res[8]){
            output = res[5];
    }else if(res[6] <= res[1] && res[6] <= res[2] && res[6] <= res[3] && res[6] <= res[4] && res[6] <= res[5] && res[6] <= res[0] && res[0] <= res[7] && res[6] <= res[8]){
            output = res[6];
    }else if(res[7] <= res[1] && res[7] <= res[2] && res[7] <= res[3] && res[7] <= res[4] && res[7] <= res[5] && res[7] <= res[6] && res[7] <= res[0] && res[7] <= res[8]){
            output = res[7];
    }else {
            output = res[8];
    }



    cout << output;


    return 0;
}
