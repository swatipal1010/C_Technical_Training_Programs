#include<stdio.h>
#include<stdlib.h>

int main(){
    typedef struct node{
        int val;
        struct node* next;
        struct node* prev;
    }node;

    node* head = (node*)malloc(sizeof(node));
    head->val = 1;
    head->prev =NULL;
    head -> next = NULL;

    node* newNode = (node*)malloc(sizeof(node));
    newNode -> val = 2;
    newNode->prev = head;
    newNode->next = NULL;


    //Connecting head node with the newNode created
    head->next = newNode;

    printf("head->next node contains the value: %d\n",head->next->val);

    node* temp = head;
    printf("Values stored in the linked list: ");
    while(temp != NULL){
        printf("%d-->",temp->val);
        temp = temp->next;
    }

    //free dynamically created nodes
    temp = head;
    while(temp!=NULL){
        node* nextPtr = temp->next;
        free(temp);
        temp = nextPtr;
    }

}