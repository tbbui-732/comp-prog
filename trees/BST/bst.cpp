/*
 * Binary Search Tree Implementation
 */

#include <iostream>

struct Node {
    int data;

    // reminder: * operator creates a pointer to a new node structure. 
    struct Node *left; 
    struct Node *right; 

    Node(int val){
        data = val; 
        left = NULL;
        right = NULL;
    }
};

int main(){
    // Creating the root node.
    struct Node *root = new Node(2);

    root->left = new Node(1); 
    root->right = new Node(3); 

    std::cout << root->left << std::endl;
    return 0; 
}
