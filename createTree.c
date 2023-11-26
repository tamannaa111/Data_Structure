
#include <stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
};
typedef struct Node node;
 
node* createNode(int data){
    node* newNode=(node*)malloc(sizeof(node));
    
    newNode->data=data;
    newNode->left=newNode->right=NULL;
    
    return newNode;
}
void printTree(node* root){
    
    if (root==NULL) {
        return ;
        
    } //for Inorder printing
    
    printTree(root->left);
    printf("%d-> ", root->data);
    printTree(root->right);
    
    
   /*
    //for preorder printing
    
    printf("%d-> ", root->data);
    printTree(root->left);
    printTree(root->right);
    
    
    //for postorder printing
    
    printTree(root->left);
    printTree(root->right);
    printf("%d-> ", root->data);
*/

    
    
}

int main(){
    node* root=createNode();
    root->left=createNode(4);
    root->right=createNode(3);
    root->left->left=createNode(10);
    root->left->right=createNode(8);
   
    
    printf("Binary inorder traversal:");
    printTree(root);
    printf("\n");
    
    return 0;
}
