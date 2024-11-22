/*efficient search
smallers to the left
biggers to the right
doesn't allow duplicates
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct node* left;
    struct node* right;
}node;

node* Create(int value){
    node* newNode = (node*)malloc(sizeof(node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

node* insert(node* root, int value){

    if(root == NULL) return Create(value);

    if(value < root->data){
        root->left = insert(root->left, value);
    }
    else if(value > root->data){
        root->right = insert(root->right, value);
    }
    return root;
}

void inOrderTraversal(node* root){
    if(root != NULL){
        inOrderTraversal(root->left);
        printf("%d ",root->data);
        inOrderTraversal(root->right);
    }
} 

node* Search(node* root, int value){
    if(root == NULL || root->data == value) return root;

    if(value < root->data) return Search(root->left, value);

    return Search(root->right, value);
}

int main(){
    node* root = NULL;

    // Inserção de valores na árvore
    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 19);
    root = insert(root, 31);

    inOrderTraversal(root); 
    printf("\n");

    int searchValue = 90;
    node* result = Search(root,searchValue); 

    if(result != NULL)printf("value founded\n");
    else printf("value not founded");

    return 0;
}