/*
 * This program open a file, read file.
 * Changes every line every word's first character to capital letter
 * writes that data to another file.
 */

#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

// Function to capitalize the first character of each word in a line
string capitalizeWord(const string &line) {
	string result = "";		// Store result string
	bool capitalize = true;		// Flag to indicate when to capitalize the word

	// Loop to check each character
	for (char letter : line) {
		// Check if line contains alphabets and capatilize the first letter
        	if (isspace(letter)) {
            		result += letter;	// Add space to the result
            		capitalize = true;	// Next character should be capitalized
        	} else {
            		if (capitalize && isalpha(letter)) {
                		result += toupper(letter);	// Capitalize the character
                		capitalize = false;		// Turn off capitalization for the rest of the word
            		} else {
                		result += letter;		// Add the character as it is.
            		}
        	}	
    	}	
    	return result;
}

int main() {

	ifstream inputFile("file1_In.txt");	// Open the input file
	ofstream outputFile("file1_out.txt");	// Open the output file

	// Check if files are successfully opened
	if (!inputFile.is_open() || !outputFile.is_open()) {
        	cerr << "Error: Unable to open file!" << endl;
        	return 1;
    	}	

	string line;
	while (getline(inputFile, line)) {
        string modifiedLine = capitalizeWord(line);	// Process each line
        outputFile << modifiedLine << endl;		// Write the modified line to the output file
    	}

	// Close the files
	inputFile.close();
	outputFile.close();
        
	cout << "The words are capitalized and store in the output file \n";	// To acknowledge the user.
	return 0;
}

