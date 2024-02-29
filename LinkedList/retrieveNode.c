#include<stdio.h>
#include<stdlib.h>
int main(){
    typedef struct node{
        int val;
        struct node* next;
    }node;

    //Creating the first node
    node* head = (node*)malloc(sizeof(node));
    head->val = 1;
    head->next = NULL;

    node* temp = head;

    int num ;
    printf("Enter the number of nodes:");
    scanf("%d",&num);

    // Create and link 3 more nodes
    for (int i = 1; i < num; i++) {
        node* newNode = (node*)malloc(sizeof(node));
        printf("Enter the value in newNode-> val i.e. value in %d node :%d\n",i,newNode->val);  
        scanf("%d",newNode);                                     // Assigning value to the new node
        newNode->next = NULL;                                   // The next pointer of the new node is initially NULL

        temp->next = newNode;                                   // Link the new node to the list
        temp = newNode;                                         // Move the temp pointer to the newly created node
    }

    //printing node
    temp = head;
    for(int i=0; i<num;i++){
        ("%d -->",temp->val);
        temp = temp->next;
    }

    //printing nodes
    temp = head;
    while(temp != NULL){
        printf("%d --> ",temp->val);
        temp = temp->next;                                     /* for 1st itr, since temp points to same node that head also points to. So temp = 
                                                                  temp-> next is equivalent to temp=head->next */
    }
}