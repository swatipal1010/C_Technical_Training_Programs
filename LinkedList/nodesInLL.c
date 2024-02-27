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
    head->next = NULL;                                          // The head node points to NULL initially

    node* temp = head;                                          // Initialize a temporary pointer to traverse the list



   // Create and link 3 more nodes
    for (int i = 2; i <= 4; i++) {
        node* newNode = (node*)malloc(sizeof(node));
        newNode->val = i;                                       // Assigning value to the new node
        newNode->next = NULL;                                   // The next pointer of the new node is initially NULL

        temp->next = newNode;                                   // Link the new node to the list
        temp = newNode;                                         // Move the temp pointer to the newly created node
    }

    

    // To print the values stored in each node
    temp = head;
    while(temp != NULL){
        printf("%d --> ",temp->val);
        temp = temp->next;                                     /* for 1st itr, since temp points to same node that head also points to. So temp = 
                                                                  temp-> next is equivalent to temp=head->next */
    }

    printf("\n");



    //To count the number of nodes in a Linked List
    int count=0;
    temp = head;
    while(temp != NULL){
            count++;
            temp = temp->next;                                    
    }
    printf("Number of nodes in the linked list are: %d\n",count);



    //Creating a node that can be added at the starting of the linked list
    node* nodeAtStart = (node*)malloc(sizeof(node));
    nodeAtStart->val = 899;
    nodeAtStart -> next = head;
    head = nodeAtStart;


    //Printing the entire linked list again
    temp = head;
    while(temp != NULL){
        printf("%d --> ",temp->val);
        temp = temp->next;                                     /* for 1st itr, since temp points to same node that head also points to. So temp = 
                                                                  temp-> next is equivalent to temp=head->next */
    }



}