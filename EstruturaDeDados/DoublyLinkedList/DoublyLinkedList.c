#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    Node* next;
    Node* prev;

}Node;

void begginInsert(Node** head, int val){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = val;
    newNode->next = *head;
    newNode->prev = NULL;

    if(*head){
        (*head)->prev = newNode;
    }
    *head = newNode;
}

void endInsert(Node** head, int val){
    Node* newNode = (Node*)malloc(sizeof(Node));
    Node* last = *head;

    newNode->data = val;
    newNode->next = NULL;
    newNode->prev = NULL;

    if(*head == NULL){
        *head = newNode;
        return;
    }
    
    while(last->next != NULL){
        last = last->next;
    }
    last->next = newNode;
    newNode->prev = last;
}

//void InsertAfter(Node** )