/*
 * The file cancel_ticket.c is used to cancel already and
 * recently booked ticket using booking id.
 */
 
#include <stdio.h>		// Standard Input-Output header file
#include <string.h>		// String header file
#include "train_details.h"	// User-defined header file

/*
 * Function to cancel a booked ticket based on the user's booking ID.
 * The function reads the booking data, identifies the booking, 
 *and removes the booking information.
 */
void cancel_ticket() {
	char booking_id[10];	// Store the user-provided Booking ID.	
	char line[256];	// To store each line read from the file
	int booking_found = 0;	// Flag to indicate whether the booking ID found
	
	// Prompt user to enter booking ID
	printf("Enter your booking ID: ");
	scanf("%s", booking_id);

	// Open the original booking file for reading and a temporary file for writing
	FILE *booking_details = fopen(BOOKING_FILE, "r");
	FILE *temp_booking_details = fopen("temp_booking_data.txt", "w");
	if (booking_details == NULL || temp_booking_details == NULL) {
		perror("Error opening file");
		return;
	} // Check if the file exist
	
	//Parse the booking data
	while (fgets(line, sizeof(line), booking_details)) {
	        // Check if the line contains the booking ID provided by the user
		if(strstr(line,"Booking ID:")&&strstr(line,booking_id)){
			booking_found = 1;
			
			//Parse the booking details
			char train_number[50];
			int booked_seats;
			
			//Skip the matching bookin
			fgets(line, sizeof(line), booking_details);		 // Train Number
			sscanf(line, "Train Number: %s\n", train_number);
			fgets(line, sizeof(line), booking_details);		 // Train Name
			fgets(line, sizeof(line), booking_details);		 // Source city
			fgets(line, sizeof(line), booking_details);		 // Destination city
			fgets(line, sizeof(line), booking_details);		 // Seats Booked
			sscanf(line, "Seats Booked: %d\n", &booked_seats);
			fgets(line, sizeof(line), booking_details);		 // Total Price
			fgets(line, sizeof(line), booking_details);
					 
			// Restore the booked seats for the matching train
			for (int i = 0; i<MAX_TRAINS; i++) {
				if(strcmp(trains[i].train_number, train_number) == 0) {
					trains[i].seats += booked_seats;
					break;
				}
			}
			
			printf("Ticket successfully canceled. Seats restored.\n");
		} else {
		
			//Write non-matching lines to the temp file
			fputs(line,temp_booking_details);
		}
	}
	
	fclose(booking_details);	// Command to close booking file
	fclose(temp_booking_details);	// Command to close temporary booking file
	
	//Replace the original booking file with the temp file
	if(booking_found){
       	 remove(BOOKING_FILE);
       	 rename("temp_booking_data.txt", BOOKING_FILE);
	} else {
     		 printf("No booking found with the provided Booking ID.\n");
      		 remove("temp_booking_data.txt");
	} 
}

