#include<stdio.h>

void sortedArray(int arr[], int l, int m, int r){
    int arr1[m-l];
    int arr2[r-m+1];

    //Copy the first portion of sorted array 'arr' into array 'arr1'
    for(int i=0; i<(m-l);i++){
        arr1[i] = arr[i+l];
    }

    //Copy the second portion of the sorted array 'arr' into array 'arr2'
    for(int j=0; j<=(r-m+1);j++){
        arr2[j]= arr[m+j];
    }


    //Logic for comparing the elements from the two arrays 'arr1' and 'arr2' and placing them in array 'arr' in sorted order
    int i, j, k;
    for(i = 0, j = 0, k = l; i <(m-l) && j < (r-m+1); k++) {
        if(arr1[i] <= arr2[j]) {
            arr[k] = arr1[i];
            i++;
        } else {
            arr[k] = arr2[j];
            j++;
        }
    }

    // To Copy the remaining elements of arr1[] to array 'arr'
    for(; i < (m-l); i++, k++) {
        arr[k] = arr1[i];
    }

    // To Copy the remaining elements of arr2[], if any to array 'arr'
    for(; j < (r-m+1); j++, k++) {
        arr[k] = arr2[j];
    }
}

int main(){

    int arr[] = {1,3,5,2,4,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    int l = 0;
    int m = 3;
    int r = len-1;

    printf("Array before sorting: ");
    for(int i=0; i<len; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");

    printf("Array after sorting: ");
    sortedArray(arr, l, m, r);

    for(int i=0; i<len;i++){
        printf("%d ",arr[i]);
    }
}