#include<stdio.h>
#include<stdlib.h>

int main(){
    typedef struct node{
        int val;
        struct node* next;
    }node;

    node* head = (node*)malloc(sizeof(node));

    int num ;
    printf("Enter the number of nodes: ");
    scanf("%d",&num);

    // Create and link more nodes
    node* temp = head;
    for (int i = 1; i <= num; i++) {                         
        printf("Enter the value in Node%d : ",i);  
        scanf("%d",&(temp->val));                                     // Assigning value to the new node

        node* newNode = (node*)malloc(sizeof(node));
        newNode->next = NULL;                                   // The next pointer of the new node is initially NULL

        temp->next = newNode;                                   // Link the new node to the list
        temp = newNode;                                         // Move the temp pointer to the newly created node
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
    while(temp!=NULL){
        printf("%d --> ",temp->val);
        temp = temp->next;
    }

    // Free dynamically allocated memory
    temp = head;
    while(temp != NULL){
        node* nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
}