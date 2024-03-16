#include <stdio.h>

int BSearch(int l, int r, int arr[], int key) {
    if (l > r) { // Search failed: target not found
        return -1;
    } else if (l == r && arr[l] == key) {
        return l;
    } else {
        int mid = (l + r) / 2; // Use a safer calculation to avoid overflow
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            return BSearch(mid + 1, r, arr, key);
        } else {
            return BSearch(l, mid - 1, arr, key);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]); // Get array length correctly

    int index = BSearch(0, n - 1, arr, 5); // Use 0 and n-1 for indices

    if (index == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index %d\n", index);
    }

    return 0;
}