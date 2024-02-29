#include<stdio.h>
#include<stdlib.h>

int main(){
    typedef struct node{
        int val;
        struct node* next;          //Creating 'next' pointer of type struct node*. This pointer---node type ke struct ko point krega
        struct node* prev;
    }node;

    //Creating he first node. Pointed by te head pointer
    node* head = (node*)malloc(sizeof(node));
    head->next = NULL;
    head->prev = NULL;
    head->val = 2;
    printf("Value in the node is:%d\n",head->val);
    printf("head->prev points to %p address \n",head->prev);
    printf("head->next points to %p address\n",head->next);

}