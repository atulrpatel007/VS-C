#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node* new_node(int data) {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node* node, int data) {
    if (node == NULL) {
        return new_node(data);
    }
    if (data < node->data) {
        node->left = insert(node->left, data);
    } else if (data > node->data) {
        node->right = insert(node->right, data);
    }
    return node;
}

struct node* search(struct node* root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }
    if (root->data < key) {
        return search(root->right, key);
    }
    return search(root->left, key);
}

int main() {
    struct node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    struct node* result = search(root, 60);
    if (result != NULL) {
        printf("Element found\n");
    } else {
        printf("Element not found\n");
    }

    return 0;
}
