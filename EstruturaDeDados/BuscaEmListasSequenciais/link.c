#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    Node* nextNode;
}Node;

Node* init(){
    return NULL;
}
void printList(Node* node){

    while(node != NULL){
        printf("%d->",node->data);
        node = node->nextNode;
    }
    printf("->NULL");
}
void insertList(Node** Head, int newData){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newData;
    newNode->nextNode = *Head;
    *Head = newNode;
}

void deleteNode(Node** Head, int key){
    Node* temp = *Head;
    Node* prev = NULL;

    if(temp != NULL && temp->data == key){ //if esta errado
        temp = *Head;
        *Head = (*Head)->nextNode;
        free(temp);
    }

    while(temp != NULL && temp->data != key){
        prev = temp;
        temp = temp->nextNode;
    }
    if(*Head == NULL)return;
    prev->nextNode = temp->nextNode;
    free(temp);

}

void reverseList(Node** head){
    Node* prev = NULL;
    Node* current = *head;
    Node* next = NULL;
    while(current != NULL){
        next = current->nextNode;
        current->nextNode = prev;
        prev = current;
        current=next;
        } 
        *head = prev;
    }