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

#define MAX 4 // Define the maximum size of the stack

// Stack class
class Stack {
private:
    int array[MAX]; // Array to store stack elements
    int top;        // Index of the top element

public:
    // Constructor to initialize the stack
    Stack() {
        top = -1; // Stack is empty
    }

    // Check if the stack is full
    bool stack_full() const {
        return top == MAX - 1;
    }

    // Check if the stack is empty
    bool stack_empty() const {
        return top == -1;
    }

    // Push an element onto the stack
    void push(int value) {
        if (stack_full()) {
            cout << "Stack Overflow! Cannot push " << value << "." << endl;
            return;
        }
        array[++top] = value; // Increment top and add the value
    }

    // Pop an element from the stack
    int pop() {
        if (stack_empty()) {
            cout << "Stack Underflow! Cannot pop." << endl;
            return -1; // Return an invalid value for an empty stack
        }
        return array[top--]; // Return the top value and decrement top
    }

    // Display elements in the stack
    void display() const {
        if (stack_empty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "In-stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack; // Create an object of the Stack class

    // Pre-fill the stack with 3 numbers
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // Display the stack
    cout << "Initial stack: ";
    stack.display();

    // Perform a push operation with user input
    int new_value;
    cout << "Enter a number to push onto the stack: ";
    cin >> new_value;
    stack.push(new_value);

    // Display the stack after push
    cout << "After push operation: ";
    stack.display();

    // Perform a pop operation
    cout << "Performing a pop operation..." << endl;

    int poppedValue = stack.pop();
    if (poppedValue != -1) {
        cout << "Popped value: " << poppedValue << endl;
    }

    // Display the stack after pop
    cout << "After pop operation: ";
    stack.display();

    return 0;
}

