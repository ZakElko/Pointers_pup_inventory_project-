#include "pupsinventory.h"

// Default constructor to initialize all member variables
pupInventory::pupInventory() : PupLicense(""), PupName(""), ownerPhone(""), priceQuoted(0.0) {}

// This is the Setter for pups license number
void pupInventory::setPupLicense(const string& license) {
    // Make sure that the length of the dog license is < 10 characters
    if (license.length() >= 10) {
        cout << "Sorry the license number must be less than 10 characters!" << endl;
        exit(EXIT_FAILURE);
    } else {
        PupLicense = license;
    }
}

// This is the Setter for dog name
void pupInventory::setPupName(const string& name) {
    // Make sure that the length of the dog name is < 15 characters
    if (name.length() >= 15) {
        cout << "Sorry the dog name must be less than 15 characters!" << endl;
        exit(EXIT_FAILURE);
    } else {
        PupName = name;
    }
}

// This is the Setter for owner phone number
void pupInventory::setOwnerPhone(const string& phone) {
    // Make sure that the length of the owner's phone number is < 11 characters
    if (phone.length() >= 11) {
        cout << "Sorry the phone number must be less than 11 characters unless your area code is on mars!" << endl;
        cout << "If you do live on mars unfortunatley we dont work on alien pups...not yet atleast." << endl;
        exit(EXIT_FAILURE);
    } else {
        ownerPhone = phone;
    }
}

// This is the Setter for the price quoted
void pupInventory::setPriceQuoted(float price) {
    // Make sure that the price quoted is not less than 0. 
    if (price < 0) {
        cout << "Sorry but this service is not free!" << endl;
        exit(EXIT_FAILURE);
    } else {
        priceQuoted = price;
    }
}

// This is the Getter for dog license number
string pupInventory::getPupLicense() const {
    return PupLicense;
}

// This is the Getter for dog name
string pupInventory::getPupName() const {
    return PupName;
}

// This is the Getter for owner phone number
string pupInventory::getOwnerPhone() const {
    return ownerPhone;
}

// This is the Getter for price quoted
float pupInventory::getPriceQuoted() const {
    return priceQuoted;
}
