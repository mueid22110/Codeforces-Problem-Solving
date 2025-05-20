#include <iostream>
#include <set>
using namespace std;

bool hasDistinctDigits(int year) {
    string s = to_string(year);
    set<char> digits(s.begin(), s.end());
    return digits.size() == s.size();
}

int main() {
    int year;
    cin >> year;
    
    while (true) {
        year++;
        if (hasDistinctDigits(year)) {
            cout << year << endl;
            break;
        }
    }

    return 0;
}
