#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>n>>t;
    string studentIn, studentOut;
    cin>>studentIn;
    studentOut = studentIn;
    
    while(t--){
        for (int i = 0; i < n-1; i++)
        {
            if((studentIn[i]=='B') && (studentIn[i+1]=='G') )
            {
                studentOut[i]='G';
                studentOut[i+1]='B';
            

            }
        }
        studentIn = studentOut;
    }
    cout<<studentOut<<endl;
}