#ifndef PUPSINVENTORY_H
#define PUPSINVENTORY_H

#include <iostream>
#include <string>
using namespace std;

class pupInventory {
private:
    string PupLicense;   // This Holds the pups license number 
    string PupName;      // This Holds the pups name 
    string ownerPhone;   // This Holds the owner's phone number 
    float priceQuoted;   // This Holds the price quoted for the bath 

public:
    // This is the Default constructor to initialize all member variables
    pupInventory();

    // These are the Setters/Mutators 
    void setPupLicense(const string& license);   // This Sets pups license number  
    void setPupName(const string& name);         // This Sets pups name  
    void setOwnerPhone(const string& phone);     // This Sets owner phone number  
    void setPriceQuoted(float price);            // This Sets price quoted  

    // These are the Getters/Accessors 
    string getPupLicense() const;   // This Returns the pups license number
    string getPupName() const;      // This Returns the pups name
    string getOwnerPhone() const;   // This Returns the owner's phone number
    float getPriceQuoted() const;   // This Returns the quoted price
};

#endif
