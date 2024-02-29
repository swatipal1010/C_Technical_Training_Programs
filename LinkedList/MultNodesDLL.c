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

    head->next = newNode;

    printf("head->next node contains the value: %d",head->next->val);

}