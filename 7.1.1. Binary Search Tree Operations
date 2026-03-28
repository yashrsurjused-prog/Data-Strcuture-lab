#include <stdio.h>
};

struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->val = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct TreeNode* insertNode(struct TreeNode* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    // Duplicates are inserted in the right subtree per requirements
    if (data < root->val) {
        root->left = insertNode(root->left, data);
    } else {
        root->right = insertNode(root->right, data);
    }
    return root;
}

// Helper for traversals to print values
void printInorder(struct TreeNode* root) {
    if (root == NULL) return;
    printInorder(root->left);
    printf("%d ", root->val);
    printInorder(root->right);
}

void inorderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        printf("The tree is empty\n");
        return;
    }
    printInorder(root);
    printf("\n");
}

void printPreorder(struct TreeNode* root) {
    if (root == NULL) return;
    printf("%d ", root->val);
    printPreorder(root->left);
    printPreorder(root->right);
}

void preorderTraversal(struct TreeNode* root) {
    if (root == NULL) {
        printf("The tree is empty\n");
        return;
    }
    printPreorder(root);
    printf("\n");
}

void printPostorder(struct TreeNode* root) {
    if (root == NULL) return;
    printPostorder(root->left);
    printPostorder(root->right);
    printf("%d ", root->val);
}

void postorderTraversal(struct TreeNode* root) {
}
