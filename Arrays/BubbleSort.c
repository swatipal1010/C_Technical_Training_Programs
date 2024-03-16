#include<stdio.h>

int* BubbleSort(int arr[], int len){

    //1st 'for' loop for number of passes -- Each pass sorts the element to its appropriate position
    for(int i=0; i<len-1; i++){
        //2nd 'for' loop for making comparisons within each pass so that the largest element in that pass reaches to its proper index after all the comparisons
        for(int j=0; j<len-1; j++){
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


//NOTE: This is not the optimized algo because already sorted elements at the end of each pass are also compared in the next pass
