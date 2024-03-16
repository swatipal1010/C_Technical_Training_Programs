#include<stdio.h>


//Optimized for already sorted array
int* BubbleSort(int arr[], int len){
    int flag=1;
    for(int i=0; i<len && flag; i++){            //If the flag value remains 0, it means no swapping has occured and then next pass doesn't happens
        flag =0;
        for(int j=0; j<len-1-i; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag =1;
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