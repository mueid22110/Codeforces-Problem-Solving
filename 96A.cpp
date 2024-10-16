#include <bits/stdc++.h>
using namespace std;
int main(){
    string player;
    cin >> player;
    // int size = player.length();
    if(player.length() < 7){
        cout << "NO" << endl;
    }else{
        bool count = false;
        for(int i = 0; i<player.length()-6;i++){
            if(player[i] == player[i+1] && player[i] == player[i+2] && player[i] == player[i+3] && player[i] == player[i+4] && player[i] == player[i+5] && player[i] == player[i+6] ){
                count = true;
            }
        }
        if(count == true){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }
    

    return 0;
}
