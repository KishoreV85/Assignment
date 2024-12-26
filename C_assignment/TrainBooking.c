/*
 * Main function to handle the train booking system menu.
 * Provide options for user to navigate between various features like
 * viewing train details, booking tickets, cancelling tickets, 
 * and view booking details.
 */

#include<stdio.h>
#include"train_details.h"

int main() {
        int option;  // Used to store user's input.	
        
        home:  // Label for returning to home menu.
        // Executes until user enter number 2.
        while (1) {
            // Display home menu.
	    printf("Welcome to YV trains!!!\n"); 
	    printf("1. Main menu\n");
	    printf("2. Exit\n");
	    //prompt user to enter the option.
	    printf("Enter the option: ");
	    scanf("%d",&option);

	    switch (option) {
		case 1: {
		     int choice = 0;
                       // Executes until user enter number 5.
			while (1) {
		        	mainmenu:  // Label for returning to main menu
		        	// Display main menu options
				printf("\nMain Menu:\n");
				printf("1. Train Details\n");
				printf("2. Ticket Booking\n");
				printf("3. Cancel Ticket\n");
				printf("4. View Ticket\n");
				printf("5. Exit\n");
				printf("\nEnter your choice: ");
				scanf("%d",&choice);        

				switch (choice) {
					case 1:
						train_details_list();     // Invoke list of train details
						display_train_details();  // Display train details
					break;
					
					case 2:
						train_details_list();    // Invoke list of train details
						char choice;
						do {
							book_ticket();	 // Book ticket as per user input
    							// Ask if the user wants to book another ticket
							printf("\nDo you want to book another ticket? (y/n): ");
							getchar();	 // Clear buffer to avoid auto input.
							scanf("%c", &choice);
						} while (choice == 'y' || choice== 'Y'); // The loop gets terminated if n is entered.
						printf("\nThank you for using the ticket booking system.\n");
						goto mainmenu;        // After ticket booked returns to mainmenu
						return 0;
						break;

					case 3:
						cancel_ticket();     // Cancels ticket using booking_id
						break;

					case 4:
						view_booking();      // View ticket using booking_id
						break;

					case 5:
						goto home;
						break;

					default:
						printf("Invalid choice...\n");
				}
			}		
		break;
	}
	
	case 2:
		printf("Thank you...\n");
		printf("HAVE A NICE DAY\n");
		printf("visit again...\n");
		return 0;
		break;
	
	default:
	printf("Invalid choice... Try again...\n");
		}
	}	
}

