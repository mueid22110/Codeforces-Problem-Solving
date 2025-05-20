#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

void solve(){
	int n;
    std::cin >> n;
    std::unordered_set<int> unique_elements;
    for (int i = 0; i < n; ++i) {
        int a;
        std::cin >> a;
        unique_elements.insert(a);
    }
    std::cout << unique_elements.size() << std::endl;
	
}


int main(){
	int t;
	cin>>t;
	while(t--){
		solve();
	}
	return 0;
}