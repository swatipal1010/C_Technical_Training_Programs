#include<stdio.h>
#include<stdlib.h>

int main(){
    //skeleton of a node
    typedef struct node{
        int val;
        struct node* next;
    }node;

    node* head = (node*)malloc(sizeof(node));
    head->val = 1;
    head->next = NULL;   
    printf("Address of head node: %p\n",head);

    node* temp = (node*)malloc(sizeof(node));
    temp->val = 2;
    temp->next = NULL;
    printf("Address of temp node when it was created: %p\n",temp);
    printf("temp->next intially: %d\n",temp->next);


    //Insert temp node at beginning
    temp->next=head;
    printf("temp->next is now address of old head node: %p\n",temp->next);
    //printf("Address of node that temp is pointing to after it becomes head node: %p\n",temp->next);

    head = temp;                                                //heads also points to the same node that temp points to
    printf("head->next is now address of old head node: %p\n", head->next);

}
