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
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "contacts.h"
// #include your contacts header file on the next line:


// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// Get and store from standard input the values for Address



int main(void) {
    // Declare variables here:

    struct Contact contact = {{{0}}}; {

// Display the title
    printf("Contact Management System\n");
    printf("=========================\n");

     // Contact Name Input:

    getName(&contact.name);
      // Contact Address Input:
      getAddress(&contact.address);
      // Contact Numbers Input:
      getNumbers(&contact.numbers);
    };
    
// Display Contact Summary Details
    printf("\nContact Details\n");
    printf("===============\n");
    printf("Name Details\n");
    printf("------------\n");
    printf("First name: %s\n", contact.name.firstName);
    printf("Middle initial(s): %s\n", contact.name.middleInitial);
    printf("Last name: %s\n\n", contact.name.lastName);
    printf("Address Details\n");
    printf("---------------\n");
    printf("Street number: %d\n", contact.address.streetNumber);
    printf("Street name: %s\n", contact.address.street);
    printf("Apartment: %d\n", contact.address.apartmentNumber);
    printf("Postal code: %s\n", contact.address.postalCode);
    printf("City: %s\n\n", contact.address.city);

    printf("Phone Numbers\n");
    printf("-------------\n");
    printf("Cell phone number: %s\n", contact.numbers.cell);
    printf("Home phone number: %s\n", contact.numbers.home);
    printf("Business phone number: %s\n", contact.numbers.business);

    // Display Completion Message
    printf("\nStructure test for Contact using functions done!\n");


    return 0;
}
