#include <stdio.h>
#define SIZE_1 5
#define SIZE_2 8

void mergeArrays(int arr1[], int arr2[], int size1, int size2, int result[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] < arr2[j]) {
            result[k++] = arr1[i++];
        } else {
            result[k++] = arr2[j++];
        }
    }
    while (i < size1) {
        result[k++] = arr1[i++];
    }
    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int tab1[] = {1, 12, 13, 14, 22};
    int tab2[] = {3, 4, 13, 45, 54, 55, 56, 66};

    size_t size1 = sizeof(tab1) / sizeof(tab1[0]);
    size_t size2 = sizeof(tab2) / sizeof(tab2[0]);

    int result[size1 + size2];
    mergeArrays(tab1, tab2, size1, size2, result);
    for (int i = 0; i < size1 + size2; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}
