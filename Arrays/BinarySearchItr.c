#include<stdio.h>

int BSearch(int arr[], int key, int len){
    int l =1, r = len;

    while(l<=r){
        int mid = (l+r)/2;
        if (arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            r = mid-1;
        }
        else if(arr[mid]<key){
            l = mid+1;
        }

    }
    return 0;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int len = sizeof(arr)/sizeof(arr[0]);

    int index = BSearch(arr, 6, len);
    printf("6 is present at index: %d", index);
}