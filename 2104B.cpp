#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;  // Read the number of test cases
    
    while (t--) {
        int n;
        cin >> n;  // Read the size of the array
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];  // Read the array elements
        }

        // Compute the total sum of the array
        long long total_sum = 0;
        for (int i = 0; i < n; ++i) {
            total_sum += a[i];
        }

        // Initialize the result vector to store the answers for each k
        vector<long long> result(n);

        // Step 1: For k = 1, we need the maximum value of a[i] because we can move any element to the end
        result[0] = *max_element(a.begin(), a.end());

        // Step 2: For each k from 2 to n, calculate the sum of the last k elements after moving one element to the end
        for (int k = 2; k <= n; ++k) {
            long long max_sum = 0;
            
            // Try moving each element to the end and calculate the sum of the last k elements
            for (int i = 0; i < n; ++i) {
                long long sum = total_sum - a[i];
                int end_sum = 0;

                // Calculate sum of the last k-1 elements excluding the element at index i
                for (int j = n - k; j < n; ++j) {
                    if (j != i) {
                        end_sum += a[j];
                    }
                }
                max_sum = max(max_sum, sum + end_sum);
            }

            result[k - 1] = max_sum;
        }

        // Print the results for the current test case
        for (int i = 0; i < n; ++i) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();  // Run the solve function
    return 0;
}
