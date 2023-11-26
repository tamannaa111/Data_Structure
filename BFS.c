#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct TreeBST {
    int data;
    struct TreeBST* left;
    struct TreeBST* right;
};

struct TreeBSTe* createBST(int data) {
    struct TreeBST* newNode = (struct TreeBST*)malloc(sizeof(struct TreeBST));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}


struct TreeBST* insert(struct TreeBST* root, int data) {
    if (root == NULL) {
        return createBST(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}


void printTree(struct TreeBST* root) {
    if (root == NULL) {
        return;
    }

    printTree(root->left);

    printf("%d ", root->data);

    printTree(root->right);
}


bool isBST(struct TreeBST* root, int* prev) {
    if (root == NULL) {
        return true;
    }

   
    if (!isBST(root->left, prev)) {
        return false;
    }

    if (root->data <= *prev) {
        return false;
    }
    *prev = root->data;

    return isBST(root->right, prev);
}

int main() {
    struct TreeNode* root = NULL;
    root = insert(root, 6);
    root = insert(root, 3);
    root = insert(root, 3);
    root = insert(root, 4);
    root = insert(root, 8);
    root = insert(root, 10);
   

    printf("Binary Tree (In-order Traversal): ");
    printTree(root);
    printf("\n");

    
    int prev = -1;
    if (isBST(root, &prev)) {
        printf("The tree is a Binary Search Tree.\n");
    } else {
        printf("The tree is NOT a Binary Search Tree.\n");
    }

    return 0;
}
