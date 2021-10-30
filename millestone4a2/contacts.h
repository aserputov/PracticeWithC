
#ifndef CONTACTS_H_
#define CONTACTS_H_
// ----------------------------------------------------------------------------

/* -------------------------------------------
Name: Anatoliy Serputov
Student number:
Email: aserputov@myseneca.ca
Section: NZZ
Date: 29.11.2019
----------------------------------------------
Assignment: 2
Milestone:  4
---------------------------------------------- */


//------------------------------------------------------
// Structure Types
//------------------------------------------------------

// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-4 |
// |        structures here...                       |
// +-------------------------------------------------+

// Structure type Name declaration

struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

struct Address {
    int streetNumber;
    char street[41];
    int apartmentNumber;
    char postalCode[8];
    char city[41];
};

struct Numbers {
    char cell[11];
    char home[11];
    char business[11];

};

struct Contact {
    struct Name name;
    struct Address address;
    struct Numbers numbers;
};





//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

void getName(struct Name *);

void getAddress(struct Address *);

void getNumbers(struct Numbers *);

void getContact(struct Contact *);



// ----------------------------------------------------------------------------
// DO NOT remove the below line (closing of the "safeguard" condition)
#endif // !CONTACTS_H_
