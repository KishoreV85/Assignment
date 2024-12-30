/*
 * This program perform the In-order, Perorder, and Postorder
 * traversal of the given value
 */

#include <iostream>
using namespace std;

// Definition of a tree node
class Node {
       
public:
    	int data;             // Data part of the node
    	Node* left_child;     // Pointer to the left child
    	Node* right_child;    // Pointer to the right child
    	Node(int value) {
    		data = value;
    		left_child = nullptr;
    	        right_child = nullptr;
    	}
};

// Function to insert a node into the binary search tree
Node* insert(Node* root, int data) {
    	if (!root) {
        	return new Node(data);   // Create and return a new node if the root is null
    	}
    	if (data < root->data) {
        	root->left_child = insert(root->left_child, data); // Insert into the left subtree
    	} else {
        	root->right_child = insert(root->right_child, data); // Insert into the right subtree
    	}
    	return root;
}

// Function to do inorder traversal and prints rootnode, left_child and right_child
void preOrder(Node* root) {
    	if (root) {
        	cout << root->data << " ";
        	preOrder(root->left_child);
        	preOrder(root->right_child);
    	}
}

// Function to do inorder traversal and prints left_child, rootnode, and right_child
void inOrder(Node* root) {
    	if (root) {
        	inOrder(root->left_child);
        	cout << root->data << " ";
        	inOrder(root->right_child);
    	}
}

// Function to do postorder traversal and prints left_child, right_child, and rootnode
void postOrder(Node* root) {
    	if (root) {
        	postOrder(root->left_child);
        	postOrder(root->right_child);
        	cout << root->data << " ";
    	}
}

int main() {
    	Node* root = nullptr;

    	// Given values to insert 
    	int values[] = {9, 4, 15, 6, 12, 17, 2};
    	int n = sizeof(values) / sizeof(values[0]);

    	// Insert values 
    	for (int i = 0; i < n; i++) {
        	root = insert(root, values[i]);
    	}	

    	// Display the traversals
    	cout << "Pre-order Traversal: ";
    	preOrder(root);
    	cout << endl;

    	cout << "Post-order Traversal: ";
    	postOrder(root);
    	cout << endl;
 
	cout << "In-order Traversal: ";
        inOrder(root);
        cout << endl;

   	return 0;
}

