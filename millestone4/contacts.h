/* -------------------------------------------
Name: Anatoliy Serputov
Student number: 167389188
Email: aserputov@myseneca.ca
Section: IPC 144
Date:13.11.2019
----------------------------------------------
Assignment: 1
Milestone:  4
---------------------------------------------- */
//==============================================
// Assignment:     1
// Milestone:      4
//==============================================

// Structure type Name declaration (Milestone 1)
struct Name {
    char firstName[31];
    char middleInitial[7];
    char lastName[36];
};

struct Address
{
    unsigned int streetNumber;
    char street[41];
    unsigned int apartmentNumber;
    char postalCode[8];
    char city[41];
};
   
struct Numbers
{
    char cell[11];
    char home[11];
    char business[11];
};
struct Contact
{
    struct Name name;
    struct Address address;
    struct Numbers numbers;
};



//------------------------------------------------------
// Function Prototypes
//------------------------------------------------------

// ====== Milestone 4 =======

void getName(struct Name *name);

void getAddress(struct Address *address);

void getNumbers(struct Numbers *numbers);

