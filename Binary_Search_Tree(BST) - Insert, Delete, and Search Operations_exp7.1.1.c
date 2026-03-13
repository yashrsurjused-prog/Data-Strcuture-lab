#include <stdio.h>
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
    //code here...
    
    
}


Node* insert(Node *root, int data) {
    if (root == NULL)
        return createNode(data);
    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);
    return root;
    
    //code here...
    
    
    
}


Node* findMin(Node *root) {
    while (root->left != NULL)
        root = root->left;
    return root;
    
    //code here...
    
    
    
}


Node* deleteNode(Node *root, int key) {
    if (root == NULL)
        return root;
    
    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Node with only one child or no child
        if (root->left == NULL) {
            Node *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children
        Node *temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
    
    //code here...
    
    
}
