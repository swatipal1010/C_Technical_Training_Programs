#include<stdio.h>
#include<stdlib.h>

int main(){
    typedef struct node{
        int val;
        struct node* next;
        struct node* prev;
    }node;


//First node
    node* head = (node*)malloc(sizeof(node));
    head->prev = NULL;
    head->next= NULL;

    printf("Enter the value in head node: ");
    scanf("%d",&(head->val));


//Nodes after the head node
    int num;
    printf("Enter the number of nodes you want in the doubly linked list after head node: ");
    scanf("%d",&num);

    node* temp = head;
    for(int i=0; i<num; i++){
        node* newNode = (node*)malloc(sizeof(node));
        printf("Enter the value for the node%d : ",i+1);
        scanf("%d",&(newNode->val));
        newNode->next = NULL;
        temp->next = newNode;
        temp = newNode;
    }

    temp->next = NULL;


//print the values in the node
    temp = head;
    while(temp!=NULL){
        printf("%d-->",temp->val);
        temp = temp->next;
    }

    // Free dynamically allocated memory
    temp = head;
    while(temp != NULL){
        node* nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }
    return 0;
}