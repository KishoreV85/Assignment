/*
 * This program perform a sorting an array 
 * of ten integer values in ascending order.
 */

#include <iostream>
using namespace std;

// Function to sort an array in ascending order
int* sortArray(int* array, int size) {
    	// Using a simple bubble sort algorithm to sort the array
    	for (int i = 0; i < size - 1; i++) {
        	for (int j = 0; j < size - i - 1; j++) {
           	 	if (array[j] > array[j + 1]) {
                		// Swap elements if they are in the wrong order
                		int temp = array[j];
                		array[j] = array[j + 1];
                		array[j + 1] = temp;
          		}
        	}
    	}
    	return array; // Return the pointer to the sorted array
}

// Function to display the array
void displayArray(int* array, int size) {
    	for (int i = 0; i < size; i++) {
        	cout << array[i] << " ";
    	}
    	cout << endl;
}

int main() {
    	
	const int size = 10;
	int array[10];

    	// Get input from the user
    	cout << "Enter 10 integers: " << endl;
    	for (int i = 0; i < size; i++) {
        	cin >> array[i];
    	}

    	// Display the original array
    	cout << "Original Array: ";
    	displayArray(array, 10);

    	// Sort the array using the sortArray function
    	int* sortedArray = sortArray(array, 10);

    	// Display the sorted array
    	cout << "Sorted Array: ";
    	displayArray(sortedArray, 10);

    	return 0;
}

