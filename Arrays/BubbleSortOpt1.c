#include<stdio.h>

//Optimizing this Bubble sort algo in terms of not comparing the already sorted elements that we get at the end of each pass

int* BubbleSort(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-1-i; j++){              //j loop doesn't compares the last i elements bcz they are already sorted
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
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

