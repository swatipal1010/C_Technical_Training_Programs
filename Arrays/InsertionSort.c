#include<stdio.h>

int* InsertionSort(int arr[], int size){
    for(int i=1; i<size; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;
    }
    return arr;
}

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements in the array: \n");

    for(int i=0; i<size; i++){
        scanf("%d", &(arr[i]));
    }

    printf("Elements in the array are: \n");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    int* sortedArr = InsertionSort(arr,size);

    printf("Array sorted in ascending order: \n");
    for(int i=0; i<size; i++){
        printf("%d ",*(sortedArr+i));
    }
}