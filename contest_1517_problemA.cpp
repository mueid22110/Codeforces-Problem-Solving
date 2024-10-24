// #include <iostream>
// using namespace std;
// int main(){
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long n;
//         cin >> n;
//         int count=0;
//         while(n>=2050){
//             count++;
//             long x = 2050;
//             while(x<=n){
//                 x*=10;
//             }// the code to be changed to overcome TLE
//             x/=10;
//             n= n-x;
//         }
//         if(n != 0){
//             cout << -1 << endl;
//         }else{
//             cout << count << endl;
//         }
//     }


//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n; 
        cin >> n;
        if (n % 2050 != 0) {  
            cout << -1 << endl;
            continue;
        }
        n /= 2050;
        int sum_of_digits = 0;
        while (n > 0) {
            sum_of_digits += n % 10;
            n /= 10;
        }
        cout << sum_of_digits << endl;
    }

    return 0;
}
