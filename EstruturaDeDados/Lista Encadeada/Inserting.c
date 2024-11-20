#include <stdlib.h>

typedef struct node{
    int data;
    Node* next;
}Node;

void initInsertion(Node** head, int newData){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

void endInsertion(Node** head, int newData){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newData;
    newNode->next = NULL;
    Node* aux;
    if(*head == NULL){
        *head = newNode;
    }
    else{
        aux = *head;
        while(aux->next != NULL){
            aux = aux->next;
        }
        aux->next = newNode;
    }

}

void middleInsertion(Node** head, int newData, int ref){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newData;
    Node* aux;
    if(*head == NULL){
        newNode->next = NULL;
        *head = newNode;
    }
    else{
        aux = *head;
        while(aux->data != ref && aux->next){
            aux = aux->next;
        }
        newNode->next = aux->next;
        aux->next = newNode;
    }
}

void orderedInsertion(Node** head, int newData){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newData;
    if(*head == NULL){
        newNode->next = NULL;
        *head = newNode;
    }
    else if (newNode->data < (*head)->data)
    {
        newNode->next = *head;
        *head = newNode;
    }
    else{
        Node* aux = *head;
        while(aux->next && newNode->data > aux->next->data){
            aux = aux->next;
        }
        newNode->next = aux->next;
        aux->next = newNode;
    }

}
