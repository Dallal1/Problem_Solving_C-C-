#include <stdio.h>

// Function to count inversions in an array
long long mergeAndCount(int arr[], int l, int m, int r) {
    int left[m - l + 1], right[r - m + 1];
    long long inversionCount = 0;

    for (int i = 0; i < m - l + 1; i++)
        left[i] = arr[l + i];
    for (int i = 0; i < r - m; i++)
        right[i] = arr[m + 1 + i];

    int i = 0, j = 0, k = l;
    while (i < m - l + 1 && j < r - m) {
        if (left[i] <= right[j])
            arr[k++] = left[i++];
        else {
            arr[k++] = right[j++];
            inversionCount += (m - l + 1) - i;
        }
    }

    while (i < m - l + 1)
        arr[k++] = left[i++];
    while (j < r - m)
        arr[k++] = right[j++];

    return inversionCount;
}

// Recursive function to merge sort and count inversions
long long mergeSortAndCount(int arr[], int l, int r) {
    long long inversionCount = 0;
    if (l < r) {
        int m = (l + r) / 2;
        inversionCount += mergeSortAndCount(arr, l, m);
        inversionCount += mergeSortAndCount(arr, m + 1, r);
        inversionCount += mergeAndCount(arr, l, m, r);
    }
    return inversionCount;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n], b[n];

        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < n; i++)
            scanf("%d", &b[i]);

        // Sort array a and count inversions
        long long inversionsA = mergeSortAndCount(a, 0, n - 1);
        // Sort array b and count inversions
        long long inversionsB = mergeSortAndCount(b, 0, n - 1);

        // Output the sorted arrays
        for (int i = 0; i < n; i++)
            printf("%d ", a[i]);
        printf("\n");
        for (int i = 0; i < n; i++)
            printf("%d ", b[i]);
        printf("\n");
    }

    return 0;
}
