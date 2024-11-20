#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

void deleteNode(Node** head, int value){
    Node* prev = NULL;
    Node* temp =  *head;

    if(temp->data == value){
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    while(temp !=  NULL && temp->data != value){
        prev = temp;
        temp = temp->next;
    }

    if(*head == NULL)return;

    prev->next = temp->next;
    free(temp);
}

void initDelete(Node** head){
    if(*head == NULL)return;
    Node* remove = *head;
    *head = (*head)->next;
    free(remove);
}

void deleteEnd(Node** head){

    Node* temp = *head;
    Node* prev = NULL;

    if(temp->next == NULL){
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    if(temp == NULL)return;

    while(temp != NULL){
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    free(temp);
}