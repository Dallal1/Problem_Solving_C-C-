#include <stdio.h>
#include <stdlib.h>

// Function to compare integers (used for qsort)
int compareIntegers(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

// Function to calculate the maximum beauty of the array
int maxBeauty(int arr[], int n) {
    int beauty = 0;
    qsort(arr, n, sizeof(int), compareIntegers);
    for (int i = 1; i < n; i++) {
        beauty += abs(arr[i] - arr[i - 1]);
    }
    return beauty;
}

int main() {
    int testCase;
    scanf("%d", &testCase);

    while (testCase--) {
        int size;
        scanf("%d", &size);

        int arr[size];
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }

        // Calculate the maximum beauty of the array
        int beauty = maxBeauty(arr, size);
        printf("%d\n", beauty);
    }

    return 0;
}