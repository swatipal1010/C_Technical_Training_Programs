#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int value;
    struct Node *head;
}Node;
Node *head;

push(int v){
    insertAtHead(int v);
}

insertAtHead(int v){
    if(head==NULL){
        Node *n = (Node*)malloc(sizeof(Node));
        n->val = v;
        n->next=NULL;
        size++;
        head = n;
    }else{
        Node *n = (Node*)malloc(sizeof(Node));
        n ->val =v;
        n->next= head;
        size++;
        head = n;
    }
}

void print(){
    
}

int main(){
    push(1);
    print();
    pop();
}

