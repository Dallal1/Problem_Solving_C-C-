#include <stdio.h>

int min_cells_to_color(int n, int k) {
    if (n % 2 == 0) {
        return (n < k + 1) ? n : k + 1;
    } else {
        return (n < k) ? n : k;
    }
}

int main() {
    int t, n, k;
    // Read the number of test cases
    scanf("%d", &t);

    // Process each test case
    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n, &k);
        printf("%d\n", min_cells_to_color(n, k));
    }

    return 0;
}
