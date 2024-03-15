#include <stdio.h>
#include <stdlib.h>

int *merge(int arr1[], int arr2[], int len1, int len2) {
    int len = len1 + len2;
    int *arr3 = (int *)malloc(len * sizeof(int)); // Dynamically allocate memory for the merged array

    int i = 0, j = 0, k = 0;
    while (i < len1 && j < len2) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < len1) {
        arr3[k++] = arr1[i++];
    }
    while (j < len2) {
        arr3[k++] = arr2[j++];
    }

    return arr3;
}

int main() {
    int arr1[] = {2, 8, 15, 18};
    int arr2[] = {5, 9, 12, 17, 19, 25};

    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

    int *arr = merge(arr1, arr2, len1, len2);

    for (int i = 0; i < len1 + len2; i++) {
        printf("%d ", arr[i]);
    }

    free(arr); // Free the dynamically allocated memory
    return 0;
}
