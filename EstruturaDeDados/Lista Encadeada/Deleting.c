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
    
    if(*head == NULL)return;

    if((*head)->next == NULL){
        free(head);
        *head = NULL;
        return;
    }

    Node* temp = *head;
    Node* prev = NULL;

    while(temp->next != NULL){
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
}