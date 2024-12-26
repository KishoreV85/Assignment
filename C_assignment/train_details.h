/*
 * This file contains all the declaration and structure.
 * extern is used to declare the MAX_TRAINS as globally.
 */

#ifndef TRAIN_DETAILS_H
#define TRAIN_DETAILS_H

// Maximum number of trains supported in the system
#define MAX_TRAINS 7

// File path for storing booking data
#define BOOKING_FILE "booking_data.txt"

// Structure representing a train's details.
typedef struct {
	char  train_number[50];	// Unique number for the train
	char  train_name[50];		// Name of the train
	char  source_city[50];		// City where the train starts
	char  destination_city[50];    // City where the train reaches
	char  departure_time[50];	// Departure time of the train
	char  arrival_time[50];	// Arrival time of the train
	int   seats;			// Number of available seats
	float price;			// Ticket price per seat
} Train;

// Lists all available trains in the system.
void train_details_list();

// Displays detailed information about a specific train.
void display_train_details();

// Allows user to book a ticket for a train.
void book_ticket();

/*
 * Saves the booking details to the file.
 * @param booking_id   Unque identifier for the booking.
 * @param train        Pointer to the train associated with the booking_id
 * @param booked_seats Number of seats booked.
 */
void save_booking(const char* booking_id, Train* train, int booked_seats);

// Cancels the booked ticket and updates availability.
void cancel_ticket();

//Displays booking details using booking_id.
void view_booking();

/*
 * Array of train objects representing the available trains.
 * Defined globally.
 */
extern Train trains[MAX_TRAINS];

#endif //TRAIN DETAILS H

