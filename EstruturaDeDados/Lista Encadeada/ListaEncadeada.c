#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    Node* next;
}Node;

Node* init(){ 
    return NULL; //Criando uma lista vazia
}

void insertInitNode(Node** head, int newData){ // inserindo no início da lista
    Node* newNode = (Node*)malloc(sizeof(Node)); //criando um espaço para inserir na lista usando memory allocation
    newNode->data = newData; //colocando o valor de newData como o "data" do node criado
    newNode->next = *head; //colocando ele no início da lista
    *head = newNode; //faz o head apontar para o novo nó
}

void printList(Node* node){
    while(node != NULL){ //enquanto não cheagar no último
        printf("%d->",node->data);
        node = node->next; //passando de nó em nó
    }
    printf("->NULL");
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
    reverseList(&head);
    printList(head);
    return 0;
}