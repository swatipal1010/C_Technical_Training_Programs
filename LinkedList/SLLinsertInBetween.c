#include<stdio.h>
#include<stdlib.h>

//First we'll create some nodes and then insert a node between these nodes

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
        scanf("%d",&(temp->val));                                     

        node* newNode = (node*)malloc(sizeof(node));
        newNode->next = NULL;                                   // The next pointer of the new node is initially NULL

        temp->next = newNode;                                   // Link the new node to the list
        temp = newNode;                                         // Move the temp pointer to the newly created node
    }

//Inserting new node between the existing nodes
    int pos;
    printf("Position of nodes lies from %d to %d\n",0, num-1);
    printf("Enter the position where you want to insert the new node: ");
    scanf("%d",&pos);

    if(pos<num-1 && pos>=0){                                      //Staring position from 0
        node* nodeInBw = (node*)malloc(sizeof(node));
        printf("Enter the value to be stored in the node to be inserted in between: ");
        scanf("%d",&(nodeInBw->val));

        temp = head; 
        int count =0;
        while(count < pos - 1 && temp!= NULL){
            temp = temp->next;
            count++;
        }
        nodeInBw->next = temp->next;
        temp -> next = nodeInBw;
    }else if(pos==num-1){
        printf("You are at the tail. Node needs to be inserted between the head and tail.\n");
    }else{
        printf("You entered the wrong position. Position exceeds the length of existing Linked List.\n");
    }

    //Print LL
    temp = head;
    while(temp!=NULL){
        printf("%d --> ",temp->val);
        temp = temp->next;
    }
    return 0;
}