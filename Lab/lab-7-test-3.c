#include <stdio.h>

int *bisect(int *arr, int x, int left, int right, int *count) {
    int mid = (left + right) / 2;

    if (left > right) {
        return NULL;
    }

    if (arr[mid] == x) {
        (*count)++;
        int *left_match = bisect(arr, x, left, mid-1, count);
        int *right_match = bisect(arr, x, mid+1, right, count);
        return &arr[mid];
    }

    if (arr[mid] < x) {
        return bisect(arr, x, mid+1, right, count);
    } else {
        return bisect(arr, x, left, mid-1, count);
    }
}

int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x;
    printf("Enter the value to search for: ");
    scanf("%d", &x);

    int count = 0;
    int *result = bisect(arr, x, 0, size-1, &count);
    if (result == NULL) {
        printf("Value not found in the array.\n");
    } else {
        printf("Value found at address: %p\n", result);
        printf("Number of occurrences: %d\n", count);
    }

    return 0;
}
