#include <stdlib.h>
#include <stdio.h>

//==============ESTRUTURA DA LISTA==================
struct Node{ // estrutura de um nó

    int data; //conteúdo do que vai ser inserido no nó
    struct Node *next; //ponteiro do tipo "struct Node" que irá apontar para o próximo espaço

};
//===============INICIALIZAÇÃO DA LISTA=============
struct Node *initList(){ // função do tipo "struct node" para inicializar uma lista
    return NULL; //retorna nulo pois é uma lista vazia durante a sua inicialização
}

//=============INSERINDO NA LISTA=================

void insert(struct Node **head, int NewData){
    struct Node *NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->data = NewData;
    NewNode->next = *head;
    *head = NewNode;
}
void PrintList(struct Node *node){
    while(node != NULL){
        printf("[%d],",node->data);
        node = node->next;

    }
    printf("NULL\n");
}

int main(){
    struct Node *head = initList();
    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    printf("My First Linked List:");
    PrintList(head);
    return 0;
}