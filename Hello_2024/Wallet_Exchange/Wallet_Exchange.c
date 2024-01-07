#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    char resultArr[1000][6]; // Assuming "Alice" or "Bob" will fit in 6 characters and there are at most 1000 test cases

    for (int i = 0; i < t; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        // Calculate the result for the current test case
        if ((a + b) % 2 == 0) {
            sprintf(resultArr[i], "Bob");
        } else {
            sprintf(resultArr[i], "Alice");
        }
    }

    // Print or use the results as needed
    for (int i = 0; i < t; i++) {
        printf("%s\n", resultArr[i]);
    }

    return 0;
}
