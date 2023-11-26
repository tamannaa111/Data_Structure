#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the binary search tree
struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};
// Function to create a new node with the given data
struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a new element into the BST
struct TreeNode* insert(struct TreeNode* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

// Function to perform an in-order traversal and print the tree
void printTree(struct TreeNode* root) {
    if (root == NULL) {
        return;
    }


    printTree(root->left);

    printf("%d ", root->data);

    printTree(root->right);


}
int main() {
    struct TreeNode* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
     // Print the tree using in-order traversal
    printf("Binary Tree (In-order Traversal): ");
    printTree(root);
    printf("\n");



    return 0;
}
