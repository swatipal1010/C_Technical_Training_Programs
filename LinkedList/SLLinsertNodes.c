#include<stdio.h>
#include<stdlib.h>
int main(){
    typedef struct node{
        int val;
        struct node* next;
    }node;

    //Creating the first node 'head'
    node* head = (node*)malloc(sizeof(node));
    head->next = NULL;


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

    //printing node
    temp = head;
    for(int i=0; i<num;i++){
        printf("%d --> ",temp->val);
        temp = temp->next;
    }
    printf("\n");


    //printing nodes
    /* temp = head;
     while(temp != NULL){
         printf("%d --> ",temp->val);       //for 1st itr, since temp points to same node that head also points to temp->next is eq to head->next
         temp = temp->next;                                      
     } */


    //printing nodes
    temp = head;
    while(temp->next != NULL){
        printf("%d --> ", temp->val);
        temp = temp->next;
}
    return 0;
}