#include <stdlib.h>
#include <stdio.h>
/*
-alocar memória quando há a necessidade, desalocar quando não há mais

-nós estão dispersos na memória

-valores na lista não estão consecutivamente conectados

-os nós são ligados por ponteiros
*/

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* init(){
    return NULL;
}

void insert(Node** head, int NewData){
    Node* NewNode = (Node*)malloc(sizeof(Node));
    NewNode->data = NewData;
    NewNode->next = *head;
    *head = NewNode;
}

void printList(Node* node){

    while(node != NULL){
        printf("%d->", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

void deleteNode(Node** head, int key){
    Node* temp = *head;
    Node* prev = NULL;

    if(temp != NULL && temp->data == key){

        *head = temp->next;
        free(temp);
        return;
    }

    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->next;
    }
    if(temp == NULL) return;
    prev->next = temp->next;
    free(temp);

}

int main(){
    Node* head = init();

    insert(&head,10);
    printList(head);

    insert(&head,12);
    printList(head);

    insert(&head,13);
    printList(head);

    insert(&head,14);
    printList(head);

    deleteNode(&head,12);
    printList(head);
    
    deleteNode(&head,10);
    printList(head);

    deleteNode(&head,13);
    printList(head);

    return 0;
}