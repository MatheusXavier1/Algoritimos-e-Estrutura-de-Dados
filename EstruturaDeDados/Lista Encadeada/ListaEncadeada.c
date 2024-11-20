#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
   struct Node* next;
}Node;

Node* init(){ 
    return NULL; //Criando uma lista vazia
}

void begginInsert(Node** head, int newData){ // inserindo no início da lista
    Node* newNode = (Node*)malloc(sizeof(Node)); //criando um espaço para inserir na lista usando memory allocation
    newNode->data = newData; //colocando o valor de newData como o "data" do node criado
    newNode->next = *head; //colocando ele no início da lista
    *head = newNode; //faz o head apontar para o novo nó
}

void endInsert(Node** head, int newData){

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

void midInsert(Node** head, int newData, int ref){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = newData;
    Node* aux;
    if(*head == NULL){
        newNode->next = NULL;
        *head = newNode;
    }
    else{
        aux = *head;
        while(aux->data != ref  && aux->next != NULL){
            aux = aux->next;
        }
        newNode->next = aux->next;
        aux->next = newNode;
    }
}

void deleteNode(Node** head, int value){ //removendo no início da lista
    
    Node* temp = *head; // ponteiro para o primeiro nó  
    Node* prev = NULL; //ponteiro para o no anterior
    

    //caso esteja no primeiro nó
    if(temp->data == value){    
        
        temp = *head; //atualiza a cabeça para o primeiro nó
        *head = (*head)->next;
        free(temp);

    }

    while(temp != NULL && temp->data !=value){
        prev = temp;
        temp = temp->next;
    }
    if(*head==NULL)return; // se a lista estiver vazia
    prev->next = temp->next; //pula o valor encontrado
    free(temp); //libera temp

}

void deleteInit(Node** head){
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

void reverseList(Node** head){
    Node* prev = NULL;
    Node* current = *head;
    Node* next = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current=next;
        } 
        *head = prev;
    }

void printList(Node* node){
    while(node != NULL){ //enquanto não cheagar no último
        printf("%d->",node->data);
        node = node->next; //passando de nó em nó
    }
    printf("->NULL");
    printf("\n");
}

int main(){
    Node* head = init();

    begginInsert(&head,10);
    printList(head);

    begginInsert(&head,12);
    printList(head);

    begginInsert(&head,13);
    printList(head);

    begginInsert(&head,14);
    printList(head);

    deleteEnd(&head);
    printList(head);

    deleteInit(&head);
    printList(head);

    deleteInit(&head);
    printList(head);

    return 0;
}