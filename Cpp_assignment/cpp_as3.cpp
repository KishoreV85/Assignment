/*
 * This code gets input string from user.
 * Performs concatenation without string library function
 */

#include <iostream>
using namespace std;

// Function to concatenate two strings
string concatenate(string sentence1, string sentence2) {
	string result = ""; // Initialize an empty result string

	// Append characters of the first string
	for (char line1 : sentence1) {
		result += line1;
	}

        // Add blankspace between two strings
        result += ' ';
        
	// Append characters of the second string
	for (char line2 : sentence2) {
		result += line2;
	}
	

	return result;
}

int main() {

	string sentence1 = "Programming";
	string sentence2 = "is awesome";
	

	/*// Prompt user to get string
	cout << "Enter the first string: ";
	getline(cin,sentence1);
	
	cout << "Enter the second string: ";
	getline(cin,sentence2);*/

	// Concatenate and display the result
	string result = concatenate(sentence1, sentence2);
	cout << "Concatenated String: " << result << endl;

	return 0;
}

