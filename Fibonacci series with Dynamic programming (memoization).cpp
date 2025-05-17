#include <stdio.h>
#include <string.h> 

int dp[100]; 

int fibo(int n) {
    if (n <= 1) return n;

    if (dp[n] != -1) return dp[n];

    dp[n] = fibo(n - 1) + fibo(n - 2);

    return dp[n];
}

int main() {
    memset(dp, -1, sizeof(dp)); 

    int n;
    scanf("%d", &n);
for (int i = 0; i < n; i++) {
        printf("%d ", fibo(i));
    }
    printf("\n");
    return 0;
}
