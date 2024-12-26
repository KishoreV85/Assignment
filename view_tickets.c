/*
 * The view_tickets.c is used to view the booked ticket 
 * with the booking_id and displays the same
 */
#include <stdio.h>		// Standard Input-Output header file
#include <string.h>		// String header file
#include "train_details.h"	// User-defined header file

/*
 * Function to view a booking based on the user's input Booking ID.
 * Reads from the booking data file and displays booking details
 */
void view_booking() {
	char booking_id[10];	// To store the user's Booking ID input
	char line[256];	// To store each line read from the file
	int booking_found = 0;	// Flag to indicate whether the booking was found
	
	// Prompt the user to enter the Booking ID
	printf("Enter the Booking ID: ");
	scanf("%s",booking_id);
	
	// Open the booking data file in read mode from file booking_data.txt
	FILE *booking_details = fopen("booking_data.txt", "r");
	if (booking_details == NULL) {
		perror("Error opening booking file");
		return;
	} // Check if the file is available or not.
	
	// Read the file line by line to find the booking
	while(fgets(line, sizeof(line), booking_details)) {
        	if (strstr(line, "Booking ID:") && strstr(line, booking_id)) {
            		booking_found = 1;
            		printf("\nBooking Details:\n");
            		printf("%s", line); // Booking ID
            		
		// Print the following lines related to the booking
		for (int i = 0; i < 7; i++) {
			if(fgets(line, sizeof(line), booking_details)) {
	                    printf("%s", line);
		} 
	    }
            printf("\n");
            break;
        	} // Valid if the entered booking id match with booking id in the file.
	}
	
	fclose(booking_details); // Used to close the opened file

	if(!booking_found){
       	 printf("No booking found with the provided Booking ID.\n");
       } // Valid if there is no booking id	
}

