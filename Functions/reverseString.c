#include<stdio.h>

void revString(char arr[], int size) {
    char temp;
    for (int i = 0; i < size / 2; i++) {           //we traverse till the mid of character array to exchange the position of characters in a string
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int l;
    printf("Enter the size of the string: ");
    scanf("%d",&l);
	char str[l];
    getchar();

    printf("Enter the string: ");
	scanf("%[^\n]",&str);

    printf("Original string is: %s\n",str);
    revString(str,l);
    printf("Reversed string is:%s",str);
	return 0;
}




