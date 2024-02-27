#include<stdio.h>
#include<stdlib.h>

int main(){
    typedef struct node{
        int val;
        struct node* next;
    }node;

    node* head = (node*)malloc(sizeof(node));     //allocates memory for structure and returns its base address to store in pointer 'head'
                                                 //'head' stores the address and points to the 'node' structure
    head->val=4;                                 //store the value 4 in 'val' member of the structure 'node' pointed by 'head' pointer
    //head->next =NULL;                          //store the value NULL in 'next'pointer member of the structure 'node' pointed by 'head' pointer

    printf("%d\n",head->val);
   

//Allocating memory to structure 'node' and returning it's address to 'node' type pointer.
    node* temp = (node*)malloc(sizeof(node));       //temp points to memory allocated to 'node' structure


//Assigning values to members to node structure which is pointed by the head pointer
    temp->val = 5;                                  //temp jis structure ko point kr rha uske 'val' member mai insert 5
    temp->next = NULL;
    printf("%d\n",temp->val);                      
    printf("%p\n",temp->next);

    head->next = temp;                             /* head pointer jis node ko point kr rha uske 'next' pointer mai store the address of the node 
                                                    pointed by the 'temp' pointer */

    printf("%p\n",temp);                            //address pointed by the 'temp' pointer
    printf("%p\n",head->next);                      //address of node, pointed by the pointer of the node to which heads points to 


    // Add more nodes to the linked list
    // Traverse the list until the last node
    node* current = head;                           //We start a pointer 'current' from head
    while (current->next != NULL) {                 //We traverse until the node's next pointer points to NULL i.e we reach on last node
        current = current->next;                   /* We store the address that current->next points to, in current pointer i.e. current points to 
                                                    the address current->next points to */
    }

    node* newNode = (node*)malloc(sizeof(node));
    newNode->next = NULL;
    newNode->val = 6;

    current->next = newNode;
    printf("%d\n",current->next->val);
    printf("%d \n",newNode->val);

    printf("%p\n",current->next);
    printf("%p\n",newNode);


    printf("Linked list obtained so far: %d --> %d --> %d",head->val, temp->val,newNode->val);

}
