#include <stdio.h>

int main() {
    int N, temp;
    scanf("%d", &N);
    int arr[N];

    // Input numbers into the array
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble sort algorithm
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    for (int i = 0; i < N; i++) {
        printf("%d", arr[i]);
        if (i < N - 1) {
            printf(" ");
        }
    }

    return 0;
}