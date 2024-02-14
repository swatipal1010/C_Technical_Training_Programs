#include<stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
   
    printf("Prime numbers upto %d are: \n", num); 
        for(int i = 2; i <= num; i++) {
        int result = 0;
        for(int j = 2; j < i; j++) { 
            if(i % j == 0) {
                result = 1;
                break;
            }
        }
        if(result == 0) {
            printf("%d ", i); 
        }
    }

    return 0;
}
