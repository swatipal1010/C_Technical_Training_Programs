#include<stdio.h>

int LSearch(int arr[], int key, int len){
    for(int i=0; i<len; i++){
        if(arr[i]==key){
            return i;
        }
        }
     return -1;
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

    printf("Enter the value to be searched from the array: ");
    int num;
    scanf("%d", &num);

    int index = LSearch(arr, num, size);

    if(index==-1){
        printf("Key value is not found within the array.");
    }else{
         printf("%d lies at %d index.",num,index);
    }
   
}