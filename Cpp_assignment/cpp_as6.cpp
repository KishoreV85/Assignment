/*
 * This program performs the stack function.
 * The stack has the per-defined element.
 * Then, it prompt the user to enter the number.
 * Then the value is pushed into stack.
 * Then the program automatically perform pop operation.
 * So, last pushed element get popped out first.
 * Then finally the instack element displayed.
 */

#include <iostream>
using namespace std;

#define MAX 4444 // Define the maximum size of the stack

// Stack structure
struct Stack {
	int array[MAX];	// Array to store stack elements
	int top;	// Index of the top element
};

// Initialize the stack
void initialize(Stack& stack) {
	stack.top = -1; // Stack is empty
}

// Check if the stack is full
bool stack_full(const Stack& stack) {
	return stack.top == MAX - 1;
}

// Check if the stack is empty
bool stack_empty(const Stack& stack) {
	return stack.top == -1;
}

// Push an element onto the stack
void push(Stack& stack, int value) {
	if (stack_full(stack)) {
        	cout << "Stack Overflow! Cannot push " << value << "." << endl;
        	return;
	}
    	stack.array[++stack.top] = value; // Increment top and add the value
}

// Pop an element from the stack
int pop(Stack& stack) {
	if (stack_empty(stack)) {
        	cout << "Stack Underflow! Cannot pop." << endl;
        	return -1; // Return an invalid value for an empty stack
    	}
    	return stack.array[stack.top--]; // Return the top value and decrement top
}

// Display elements in the stack
void display(const Stack& stack) {
    	if (stack_empty(stack)) {
        	cout << "Stack is empty!" << endl;
        	return;
    	}
    	cout << "In-stack elements: ";
    	for (int i = 0; i <= stack.top; i++) {
        	cout << stack.array[i] << " ";
    	}
    	cout << endl;
}

int main() {
    	Stack stack;	    // Declare a stack
    	initialize(stack);  // Initialize the stack

    	// Pre-fill the stack with 3 numbers
    	push(stack, 10);
    	push(stack, 20);
    	push(stack, 30);

    	// Display the stack
    	cout << "Initial stack: ";
    	display(stack);

    	// Perform a push operation with user input
    	int new_value;
    	cout << "Enter a number to push onto the stack: ";
   	cin >> new_value;
    	push(stack, new_value);

    	// Display the stack after push
    	cout << "After push operation: ";
    	display(stack);

    	// Perform a pop operation
    	cout << "Performing a pop operation..." << endl;

    	int poppedValue = pop(stack);
    	if (poppedValue != -1) {
        	cout << "Popped value: " << poppedValue << endl;
    	}

    	// Display the stack after pop
    	cout << "After pop operation: ";
    	display(stack);

    	return 0;
}

