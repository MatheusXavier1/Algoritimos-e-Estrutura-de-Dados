//Definindo a estrutura de um Nó:

struct Node{
    int dado;
    struct Node* next;
};

//Criando Nó

struct Node* criaNo(int valor){         // criando uma função do tipo Node e passando para ela o argumento valor que sera o valor do nó
    struct Node* novoNo = (struct Node*)malloc(sizeof(struct Node));        // criando um novo espaço para o próximo nó que sera do tipo struct node por conta do cashing. essa criação é feita pelo malloc que aloca dinamicamente uma memória de tamanho especificado 
    novoNo->dado = valor;       //colocando o valor dentro do dado de novo Nó
    novoNo->next = NULL;        //fazendo com que ele aponte para o vazio.
    return novoNo;
}


//adicionando no no fim da lista

void addNode()
