/*
 * Name: Herberth Sanchez-Gomez
 * Week: Week 6 Homework - Menu (do-while)
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice = 0;
    string userName = "";

    // Prompt for the user's name once at the start
    cout << "Enter your name: ";
    getline(cin, userName);

    do {
        // Display the menu options
        cout << "\n--- MENU ---\n";
        cout << "1. Print Hello\n";
        cout << "2. Count down\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        // Handle the choices using conditional logic
        if (choice == 1) {
            cout << "Hello " << userName << "\n";
        }
        else if (choice == 2) {
            int startNum = 0;
            cout << "Enter a number to count down from: ";
            cin >> startNum;
            
            // Simple loop to perform the countdown
            while (startNum >= 0) {
                cout << startNum << " ";
                startNum--;
            }
            cout << "\n";
        }
        else if (choice == 3) {
            cout << "Exiting program...\n";
        }
        else {
            cout << "Invalid choice. Please enter 1, 2, or 3.\n";
        }

    } while (choice != 3); // Loop continues as long as choice is not 3

    // Required closing message outside the loop
    cout << "The Menu is closed\n";

    return 0;
}