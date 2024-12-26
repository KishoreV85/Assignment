/*
 * This program do bubble sorting algorithm using linked list.
 * Initially it create linked list with the input and stores in it.
 * Then structure pointer is used to do the bubble sorting.
 */

#include <iostream>
using namespace std;

// Definition of the structure for an node in the linked list
struct Node {
	int   data;	// Data part of the node
	Node* next;	// Pointer to the next node
};

// Function to create a new node dynamically
Node* createnode(int data) {
	Node* newnode = new Node;
	newnode->data = data;
	newnode->next = nullptr;
	return newnode;
}

// Function to add a node at the end of the linked list
void appendnode(Node*& head, int data) {
	Node* newnode = createnode(data);
	if (!head) {
		head = newnode;
		return;
	} // If the linked list is empty then create a new node
	Node* temp = head;
	while (temp->next) {
		temp = temp->next; // Traverse to the last node
	}
	temp->next = newnode; // Link the last node to new node
}

// Function to display the linked list
void displaylist(Node* head) {
	while (head) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

// Funtion to perform bubble sort on the linked list
void bubblesort(Node* head) {
	
	if (!head) {
		cout << "The list is empty.";
		return;
	} // Valid if there is no element in the list.

	bool swapped;
	Node* current;
	Node* lastsorted = nullptr; // Marks the end of the sorted section
	
	do {
		swapped = false;
		current = head;	// Pointer location
      
		// Traverse up to the last sorted node
		while (current->next != lastsorted) {
			if (current->data > current->next->data) { // Swap if the data if out of order
			// Swap the data of the nodes
			int temp = current->data;
			current->data = current->next->data;
			current->next->data = temp;
			swapped = true;
			}
			current = current->next;
		}
		lastsorted = current; // Move the end of the sorted section
	} while (swapped);	      // Exit when swapped remains as false
}

int main() {
	Node* head = nullptr;	// Initilize the head to null

	// Input array
	int array[] = {50, 34, 67, 2, 81, 46};
	int n = sizeof(array) / sizeof(array[0]);

	// Create linked list from the input array
	for (int i = 0; i < n; i++) {
		 appendnode(head, array[i]);
	 }

	cout << "Original List: ";
	displaylist(head);

	// Sort the linked list using bubble sort
	bubblesort(head);

	cout << "Sorted List: ";
	displaylist(head);

	return 0;
}
