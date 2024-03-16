#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int val;
    struct node* next;
} node;

int main() {
    node* head = NULL;
    node* temp = NULL;
    int num;

    printf("Enter the number of nodes: ");
    scanf("%d", &num);

    // Create and link nodes
    for (int i = 1; i <= num; i++) {
        node* newNode = (node*)malloc(sizeof(node));
        
        printf("Enter the value in Node%d: ", i);
        scanf("%d", &(newNode->val));

        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            temp = head;
        } else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    
    node* lastNode = (node*)malloc(sizeof(node));
    temp->next = lastNode;
    lastNode->next = NULL;
    printf("Enter the value in the last node: ");
    scanf("%d",&(lastNode->val));

    // Update temp pointer to point to the last node
    temp = lastNode;
    

    //printing the entire LL
    temp = head;
    while (temp != NULL) {
        printf("%d --> ", temp->val);
        temp = temp->next;
    }

    // Free memory
    temp = head;
    while (temp != NULL) {
        node* nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    return 0;
}