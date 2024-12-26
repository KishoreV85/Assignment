/*
 * This program is to create the deadlock condition manually 
 * by pressing enter key.
 * It has two threads first thread increment the global variable.
 * Second thread wait for user to press enter.
 * If the enter key is pressed then deadlock will be crreated.
 */

#include <iostream>
#include <thread>
#include <mutex>
#include <vector>
#include <atomic>

using namespace std;

int sharedValue = 0;	// Global variables
mutex sharedMutex;	// Mutex for synchronizing access to sharedValues

// Function for thread 1: Update shared values
void updateSharedValues() {
	for (int i = 0; i < 100; ++i) { // Loop to increment the value 100 times
	        {
	            lock_guard<mutex> lock(sharedMutex); // Lock the mutex to safely update sharedValue
	            sharedValue++; // Increment the shared value
	            cout << "GlobalValue: " << sharedValue << endl;
        }
        this_thread::sleep_for(chrono::milliseconds(500)); // Simulate some workload
    }
}

// Function for thread 2: Wait for user input and create a deadlock
void waitForUserAndCauseDeadlock() {
    	cout << "Press Enter to create a deadlock..." << endl;
    	cin.get(); // Wait for user input
	 lock_guard<mutex> lock(sharedMutex); // Lock the mutex
    	// The following line that prints the shared values is removed
    	cout << "Deadlock created!" << endl;
    	while (true) {
        	// Intentionally keep the mutex locked to simulate deadlock
    	}
}

int main() {
    	thread updaterThread(updateSharedValues);            // Thread to update sharedValues
    	thread userInputThread(waitForUserAndCauseDeadlock); // Thread to handle user input and deadlock
    	updaterThread.detach(); // Let the updater thread run independently
    	userInputThread.join(); // Wait for the user input thread to finish (it won't due to the deadlock)
    	return 0;
}

