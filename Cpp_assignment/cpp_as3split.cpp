/*
 * This program is used to split words in given sentence and
 * arrange them in reverse order.
 */

#include <iostream>
using namespace std;

// Function to reverse the words in a sentence
void reversewords(char sentence[]) {
	
	char word[100][100];	// Array to store words
	int wordcount = 0;	// Store the number of words
	int charIndex = 0;	// Store the index of each character in the array.
	
	// Split the entire sentence in to words and store it in array.
	for (int i = 0; sentence[i] != '\0'; i++) {
		if (sentence[i] == ' ') {
			word[wordcount][charIndex] = '\0';          // Null-terminate in the word.
			wordcount++;				    // Move to the next word.
			charIndex = 0;				    // Reset character index to zero if blank occurs.
		} else {
			word[wordcount][charIndex++] = sentence[i]; // Add character to the current word.
		}
	}
	word[wordcount][charIndex] = '\0';	// Null-terminate at the last word.
	wordcount++;				// Count the last word

	// Print words in reverse order from the stored character array.
	for (int i = wordcount - 1; i >= 0; i--) {
		cout << word[i];
		if (i > 0) {
			cout << " "; // Add space between words
		}
	}
}

int main() {
	
	char sentence[100] = "Hello world"; // store the string.
        
	cout << "Reverse order: ";
	reversewords(sentence);	// Function to reverse the string.	
	cout << "\n";

	return 0;
}




