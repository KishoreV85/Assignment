/*
 * The file train_details.c contains 6 set of train details.
 * This file prompt the user to enter source city where the user need to go.
 * Display the train detail related to users data.
 */
  
#include <stdio.h> 	     // Standard input-output header file
#include <string.h>	     // String header file
#include <stdlib.h>	     // Standard library header file
#include "train_details.h"  // user-defined header file

// Global array to store details of all trains
Train trains[MAX_TRAINS];

/*
 * Displays train details based on the user's source city input.
 * If no trains are available from the entered source city, notifies the user.
 */
void display_train_details() {
	char user_source_city[50]; // Stores user's source city input. 
	int  found = 0;            // variable to find if the train avaible or not.

	// Inform the user about available source cities
	printf("\nAvaiable source cities are smvtbengaluru, krbengaluru, bengaluru, mysore, erode, chennai\n");
     
	// Prompt the user to enter a source city
	printf("\nEnter the source city: ");
	getchar();  // Clear the buffer to avoid reading leftover input
	fgets(user_source_city,sizeof(user_source_city),stdin);
     
       // Remove the trailing newline character from the input
       user_source_city[strcspn(user_source_city,"\n")] = '\0';
       printf("\nAvailable Trains: \n");
     
	// Iterate over the trains array to find the matching source city  
	for (int i = 0; i<MAX_TRAINS; i++) {
          	if (strcmp(trains[i].source_city, user_source_city) == 0) {
          	     // Displays train detail
        		printf("Train Number: %s\n", trains[i].train_number);
        		printf("Train Name: %s\n", trains[i].train_name);
			printf("Source Station: %s\n", trains[i].source_city);
        		printf("Destination Station: %s\n", trains[i].destination_city);
        		printf("Departure Time: %s\n", trains[i].departure_time);
        		printf("Arrival Time: %s\n", trains[i].arrival_time);
         		printf("Seats Available: %d\n", trains[i].seats);
         		printf("Price: %.2f\n\n", trains[i].price);
        		found = 1;
        	} // Valid if the user_source_city and Train_source_city are same and set found to be 1.
	} // End for loop
	if (!found) { 
        	printf("\nNo trains from the entered source city\n");
        } // If there is no matching train then above statement get displayed.
}

/*
 * This function simulates a database for train information.
 * This function contains 6 different train details.
 * Note: To add more No. of. trains increase the maximum number of train in header file.
 */ 
void train_details_list() {

	strcpy(trains[0].train_number, "97834");
	strcpy(trains[0].train_name, "MysuruExpress");
	strcpy(trains[0].source_city, "smvtbengaluru");
	strcpy(trains[0].destination_city, "mysuru");
	strcpy(trains[0].departure_time, "10:00 AM");
	strcpy(trains[0].arrival_time, "14:00 PM");
	trains[0].seats = 50;
	trains[0].price = 200.0;

	strcpy(trains[1].train_number, "56342");
	strcpy(trains[1].train_name, "ChennaiExpress");
	strcpy(trains[1].source_city, "krbengaluru");
	strcpy(trains[1].destination_city, "chennai");
	strcpy(trains[1].departure_time, "11:00 AM");
	strcpy(trains[1].arrival_time, "23:00 PM");
	trains[1].seats = 70;
	trains[1].price = 500.0;

	strcpy(trains[2].train_number, "47932");
	strcpy(trains[2].train_name, "MetturExpress");
	strcpy(trains[2].source_city, "bengaluru");
	strcpy(trains[2].destination_city, "erode");
	strcpy(trains[2].departure_time, "8:00 AM");
	strcpy(trains[2].arrival_time, "12:00 PM");
	trains[2].seats = 80;
	trains[2].price = 300.0;

	strcpy(trains[3].train_number, "97834");
	strcpy(trains[3].train_name, "MysuruExpress");
	strcpy(trains[3].source_city, "mysore");
	strcpy(trains[3].destination_city, "Bengaluru");
	strcpy(trains[3].departure_time, "10:00 PM");
	strcpy(trains[3].arrival_time, "2:00 AM");
	trains[3].seats = 50;
	trains[3].price = 200.0;

	strcpy(trains[4].train_number, "56342");
	strcpy(trains[4].train_name, "ChennaiExpress");
	strcpy(trains[4].source_city, "chennai");
	strcpy(trains[4].destination_city, "bengaluru");
	strcpy(trains[4].departure_time, "22:00 PM");
	strcpy(trains[4].arrival_time, "9:00 AM");
	trains[4].seats = 70;
	trains[4].price = 500.0;

	strcpy(trains[5].train_number, "47932");
	strcpy(trains[5].train_name, "MetturExpress");
	strcpy(trains[5].source_city, "erode");
	strcpy(trains[5].destination_city, "bengaluru");
	strcpy(trains[5].departure_time, "1:00 PM");
	strcpy(trains[5].arrival_time, "17:00 PM");
	trains[5].seats = 80;
	trains[5].price = 300.0;
}
 

