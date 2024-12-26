/*
 * The file booking_data.c is used to create a file to 
 * store the booking data and train details
 */
 
#include "train_details.h"	// User-defined header file
#include <stdio.h>		// Standard Input-Output header file
#include <string.h>		// String header file

/*
 * Function to save booking details to a file.
 * Appends the booking information to the booking data file specified by `BOOKING_FILE`.
 * @param booking_id   The unique booking ID for the ticket.
 * @param train        Pointer to the `Train` structure containing train details.
 * @param booked_seats The number of seats booked by the user.
 */
void save_booking(const char* booking_id, Train* train, int booked_seats) {
        // open the booking file in append to add new booking details
	FILE* booking_details=fopen(BOOKING_FILE,"a");
	
	if (booking_details == NULL) {
		perror("Error opening file");
		return;
	} // Check if the file opened successfully

	fprintf(booking_details, "----------------------------\n");
	fprintf(booking_details, "Booking ID: %s\n", booking_id);
	fprintf(booking_details, "Train Number: %s\n", train->train_number);
	fprintf(booking_details, "Train Name: %s\n", train->train_name);
	fprintf(booking_details, "Source: %s\n", train->source_city);
	fprintf(booking_details, "Destination: %s\n", train->destination_city);
	fprintf(booking_details, "Depature: %s\n", train->departure_time);
	fprintf(booking_details, "Arrival: %s\n", train->arrival_time);
	fprintf(booking_details, "Seats Booked: %d\n", booked_seats);
	fprintf(booking_details, "Total Price: %.2f\n", booked_seats * train->price);
	fprintf(booking_details, "----------------------------\n");

	fclose(booking_details); // Command to close the file
}
