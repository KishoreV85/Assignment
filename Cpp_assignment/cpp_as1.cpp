/*
 * This code is used for matrix multiplication.
 * The code gets size of matrix.
 * Check the condition of the matrix multiplication.
 * Gets data from the user and perform matrix multiplication.
 * Finally, display the output
 */

#include <iostream>

int main() {
	int matrix1_row = 0;	// store the size of row of matrix_1
	int matrix1_column = 0;	// store the size of column of matrix_1
	int matrix2_row = 0;	// store the size of row of matrix_2
	int matrix2_column = 0;	// Store the size of column of matrix_2
	
	// Prompt the user to get the size of matrix_1
	std::cout << "Enter the number of rows and columns of Matrix 1: \n";
	std::cin >> matrix1_row;
	std::cin >> matrix1_column;

	// Prompt the user to get the size of matrix_2
	std::cout << "Enter the number of rows and columns of Matrix 2: \n";
        std::cin >> matrix2_row;
        std::cin >> matrix2_column;

	// Check the condition of matrix multiplication
	if (matrix1_column != matrix2_row) {
		std::cout << " Matrix Multiplication is not possible!!! \n";
        	return 1;
	}

	// Declaration of matrices
	int matrix1[matrix1_row][matrix1_column];  // To store element of matrix1.
	int matrix2[matrix2_row][matrix2_column];  // To store element of matrix2.
	int result[matrix1_row][matrix2_column];   // To store the result of multiplication.	

	// Prompt the user to enter the elements of matrix1
	std::cout << "Enter the element of matrix 1: \n";
	for (int i = 0; i < matrix1_row; i++) {
		for (int j = 0;j < matrix1_column; j++) {
			std::cin >> matrix1[i][j];
		}
	}

	// Prompt the user to enter the elements of matrix2
	std::cout << "Enter the element of matrix 2: \n";
        for (int k = 0; k < matrix2_row; k++) {
                for (int h = 0;h < matrix2_column; h++) {
			std::cin >> matrix2[k][h];
                }
        }

	//Initialize result matrix with zero
	 for (int m = 0; m < matrix1_row; m++) {
                for (int n = 0;n < matrix2_column; n++) {
                         result[m][n] = 0;
                }
        }

	// Loop to do matrix multiplication
	for (int i = 0; i < matrix1_row; i++) {
		for (int h = 0; h < matrix2_column; h++) {
			for (int k = 0; k < matrix1_column; k++) {
				result[i][h] += matrix1[i][k] * matrix2[k][h]; 
			}
		}
	}
	
	// Display the result matrix
	std::cout << "Resultant Matrix: \n" << std::endl;
	for (int i = 0; i < matrix1_row; i++) {
		for (int j = 0; j < matrix2_column; j++) {
			std::cout << result[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}









