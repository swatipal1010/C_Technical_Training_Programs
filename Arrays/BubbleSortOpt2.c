#include<stdio.h>

// Optimised for the array that is already sorted
int* BubbleSort(int arr[], int size){
    for(int i=0; i<size; i++){
        int flag=0;                             
        for(int j=0; j<size-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 1;
            }
        }
        if(flag==0){                                    /* Checking flag after each pass, if it remains 0 that means no swapping occured and hence,
                                                           the array is sorted*/                                              
            break;
        }
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

    int* sortedArr = BubbleSort(arr,size);

    printf("Array sorted in ascending order: \n");
    for(int i=0; i<size; i++){
        printf("%d ",*(sortedArr+i));
    }
}