/* 
 * This ticket_booking.c file is used to book tickets
 * Each booking a random booking_id is created and 
 * invokes the function to store the data in booking_data.txt file.
 */
 
#include <stdio.h>		// Standard input-output header file
#include <string.h>		// String header file
#include <stdlib.h>		// Standard library header file
#include <time.h>	 	// Time header file for count random
#include "train_details.h"	// User-defined header file

/*
 * Generates a random booking_id in the format "BK####".
 * @param booking_id - Pointer to store the generated booking ID.
 */
void generate_booking_id(char* booking_id) {
	srand(time(NULL)); // Random number generator with current time. 
	sprintf(booking_id, "BK%04d", rand() % 10000); // Generate a 4-digit number.
}

/* 
 * Handles the process of booking a train ticket.
 * Validates User input, checks sewat availability, deducts seats,
 * and confirm booking.
 */ 
void book_ticket() {
	char user_source_city[50];
	int requested_seats;
	
	// Prompt the user to enter the source station
        printf("Enter the source station: ");
	scanf("%s",user_source_city);
	
        // Check for trains departure from specified source city
	int found = 0;
	int train_index = -1;
        for (int i = 0; i<MAX_TRAINS; i++) {
		if (strcmp(trains[i].source_city,user_source_city) == 0) {
            		found = 1;
            		train_index = i; // Store the index of the matching train
           	        break;
               } // valid when the user source city and trains source city
        }
	if(!found){
		printf("No trains available from the specified source.\n");
	return;
       } // Valid when there is no matching train

	// Display the matching train details
	Train* selected_train = &trains[train_index];
	printf("Train Number: %s\n", selected_train->train_number);
	printf("Train Name: %s\n", selected_train->train_name);
	printf("Source: %s\n", selected_train->source_city);
	printf("Destination: %s\n", selected_train->destination_city);
	printf("Depature: %s\n", selected_train->departure_time);
	printf("Arrival: %s\n", selected_train->arrival_time);
	printf("Seats Available: %d\n", selected_train->seats);
	printf("Price: %.2f\n\n", selected_train->price);

	// Ask the user for the number of seats
	printf("Enter the number of seats you want to book: ");
	scanf("%d",&requested_seats);
	
	if (requested_seats <= 0) {
	return;
	} // Condition to exit if user enters 0
	
	if (requested_seats>selected_train->seats) {
	printf("Sorry, there are not enough seats available.\n");
	return;
	} // Check if requested seat and avaible seats are same
	
	// Deduct the requested seats from avaibale seats
	selected_train->seats-=requested_seats;
	
	// Function to generate random booking-id
	char booking_id[10];
	generate_booking_id(booking_id);

	//Print booking confirmation
	printf("\nHurray! Ticket booked successfully...\n");
	printf("---------------------------------------\n");
	printf("Booking Details: \n");
	printf("Booking ID: %s\n", booking_id);
	printf("Seats Booked: %d\n", requested_seats);
	printf("Total Price: %.2f\n", requested_seats * selected_train->price);
	printf("\n---------------------------------------\n");
	printf("Train Details: \n");
	printf("Train Number: %s\n", selected_train->train_number);
	printf("Train Name: %s\n", selected_train->train_name);
	printf("Source: %s\n", selected_train->source_city);
	printf("Destination: %s\n", selected_train->destination_city);
	printf("Depature: %s\n", selected_train->departure_time);
	printf("Arrival: %s\n", selected_train->arrival_time);

        //This function is used to save the booking details
        save_booking(booking_id, selected_train, requested_seats);
}



