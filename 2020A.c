#include <stdio.h>

int min_operations(int n, int k) {
    if (k == 1) {
        return n;  
    }
    if (n == 0) {
        return 0;  
    }
    return (n % k) + min_operations(n / k, k);  
}

int main() {
    int t;
    scanf("%d", &t);  
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        printf("%d\n", min_operations(n, k));  
    }
    return 0;
}
