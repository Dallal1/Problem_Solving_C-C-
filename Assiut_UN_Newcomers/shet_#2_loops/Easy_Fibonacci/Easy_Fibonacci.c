#include <stdio.h>

int fib(int n, int memo[]) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else if (memo[n] != -1) {
        return memo[n];
    } else {
        memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
        return memo[n];
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int memo[N + 1];
    for (int i = 1; i <= N; i++) {
        memo[i] = -1;
    }

    for (int i = 1; i <= N; i++) {
        printf("%d ", fib(i, memo));
    }

    return 0;
}
