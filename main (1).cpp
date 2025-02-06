/******************************************************************************
Zakaria Elkhodary
CISC 187 Chapter 13 Programming Assignment 
10/19/2024
*******************************************************************************/
#include <iostream>
#include <iomanip>
#include "pupsinventory.h"
using namespace std;

const int WORK_ORDERS = 5;  // Number of work orders that can be entered into the program. 

int main() {
    pupInventory pups[WORK_ORDERS];  // Array of pupInventory objects
    int pupCount = 0;             // Tracks how many pups have been entered
    int selection;                   // Menu selection input

    do {
        // Display menu options
        cout << "You Dirty Dog Menu:\n";
        cout << "-------------------\n";
        cout << "1. Enter 1 and you will be prompted to enter a work order. \n";
        cout << "2. Enter 2 and it will list all current jobs that have been entered.\n";
        cout << "3. Enter 3 and you will exit the program. \n";
        cout << "-------------------\n";
        cout << "Enter a number betweeen 1-3 to make a selection: ";
        cin >> selection;

        // Different menu options available:
        switch (selection) {
        case 1:
            if (pupCount >= WORK_ORDERS) {
                cout << "Sorry! I can only hold 5 jobs at a time!" << endl;
            } else {
                string license, name, phone;
                float price;

                // Input for the pup's details
                cout << "Please Enter the pups license number: ";
                cin >> license;
                pups[pupCount].setPupLicense(license);

                cout << "Please enter the pups name: ";
                cin >> name;
                pups[pupCount].setPupName(name);

                cout << "Please enter the owners phone number:";
                cin >> phone;
                pups[pupCount].setOwnerPhone(phone);

                cout << "Please enter the price quoted for the bath: $";
                cin >> price;
                pups[pupCount].setPriceQuoted(price);

                cout << "Thank you for coming in! Your pup " << name << " is in the right hands and will be well taken care of!" << endl;
                pupCount++;
            }
            break;

        case 2:
            // Getters/Accessors that will show all the current jobs. 
            if (pupCount == 0) {
                cout << "First enter a work order silly! Select option 1 to do this!" << endl;
            } else {
                float total = 0.0;

                for (int i = 0; i < pupCount; i++) {
                    cout << "\nJob " << i + 1 << ":\n";
                    cout << "License: " << pups[i].getPupLicense() << endl;
                    cout << "Name: " << pups[i].getPupName() << endl;
                    cout << "Phone: " << pups[i].getOwnerPhone() << endl;
                    cout << "Price: $" << fixed << setprecision(2) << pups[i].getPriceQuoted() << endl;

                    total += pups[i].getPriceQuoted();
                }
                cout << "\nTotal price for all jobs: $" << fixed << setprecision(2) << total << endl;
            }
            break;

        case 3:
            // Exit the program
            cout << "Thanks for using the menu system and have a nice day." << endl;
            break;

        default:
            cout << "Invalid menu selection. Please try again." << endl;
        }

        cout << endl;  
    } while (selection != 3);

    return 0;
}
