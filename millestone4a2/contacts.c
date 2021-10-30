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


#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// +-------------------------------------------------+
// | NOTE:  Include additional header files...       |
// +-------------------------------------------------+
#include <string.h>
#include "contacts.h"
#include "contactHelpers.h"


// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-3 |
// |        source code below...                     |
// +-------------------------------------------------+

// getName:

void getName(struct Name *ptrName) {

    int option = 0;


    printf("Please enter the contact's first name: ");
    scanf(" %30[^\n]%*c", (*ptrName).firstName);

    printf("Do you want to enter a middle initial(s)? (y or n): ");
    option = yes();


    if (option == 1) {

        printf("Please enter the contact's middle initial(s): ");
        scanf(" %6[^\n]%*c", (*ptrName).middleInitial);

    }
    else {
        strcpy((*ptrName).middleInitial, "");
    }

    printf("Please enter the contact's last name: ");
    scanf(" %35[^\n]%*c", (*ptrName).lastName);

}
// getAddress:
void getAddress(struct  Address *ptrAddress) {

    int option;

    printf("Please enter the contact's street number: ");
    option = getInt();
    if(option<0){
        printf("*** INVALID STREET NUMBER *** <must be a positive number>: ");
        option = getInt();
        (*ptrAddress).streetNumber = option;
    }


    printf("Please enter the contact's street name: ");
    scanf("%40[^\n]%*c", (*ptrAddress).street);

    printf("Do you want to enter an apartment number? (y or n): ");
    if (yes() == 1) {
        printf("Please enter the contact's apartment number: ");
        (*ptrAddress).apartmentNumber = getInt();
       // option = getInt();
        while((*ptrAddress).apartmentNumber < 0){
        if((*ptrAddress).apartmentNumber<0){
               printf("*** INVALID APARTMENT NUMBER *** <must be a positive number>: ");
               //option = getInt();
            (*ptrAddress).apartmentNumber = getInt();
              // (*ptrAddress).apartmentNumber = option;
           }
        }
    }
    else
        (*ptrAddress).apartmentNumber = 0;


    printf("Please enter the contact's postal code: ");
    scanf("%7[^\n]", (*ptrAddress).postalCode);
    clearKeyboard();
    printf("Please enter the contact's city: ");
    scanf(" %40[^\n]", (*ptrAddress).city);
    clearKeyboard();
}
// getNumbers:

void getNumbers(struct Numbers *ptrNumbers) {

    int option;

    // Contact Numbers Input:
    
    printf("Please enter the contact's cell phone number: ");
    getTenDigitPhone((*ptrNumbers).cell);

    

    printf("Do you want to enter a home phone number? (y or n): ");
    option = yes();

    if (option == 1) {

        printf("Please enter the contact's home phone number: ");
        getTenDigitPhone((*ptrNumbers).home);
    }
    else
        strcpy((*ptrNumbers).home, "\0");

    printf("Do you want to enter a business phone number? (y or n): ");
    option = yes();

    if (option == 1) {

        printf("Please enter the contact's business phone number: ");
        getTenDigitPhone((*ptrNumbers).business);
       
    }
    else
        strcpy((*ptrNumbers).business, "\0");

}
// getContact:

void getContact(struct Contact *contact) {

    getName(&(*contact).name);
    getAddress(&(*contact).address);
    getNumbers(&(*contact).numbers);

}
