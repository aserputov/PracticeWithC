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
void uf() {
while (getchar() != '\n');
}
// This source file needs to "know about" the structures you declared
// in the header file before referring to those new types:
// HINT: put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
// #include your contacts header file on the next line:


void getName(struct Name *name) {
    
    char option;
    
    printf("Please enter the contact's first name: ");
    scanf(" %40[^\n]s", name->firstName);
    
    uf();
    printf("Do you want to enter a middle initial(s)? (y or n): ");
    scanf(" %c", &option);
    
    if (option == 'y' || option == 'Y') {
        printf("Please enter the contact's middle initial(s): ");
        scanf(" %40[^\n]s",name->middleInitial);
       
    }
    
    uf();
    printf("Please enter the contact's last name: ");
    scanf(" %40[^\n]s", name->lastName);
  

}

// Put your code here that defines the Contact getAddress function:

void getAddress(struct Address *address) {
    char option;
    uf();
    printf("Please enter the contact's street number: ");
    scanf(" %d", &address->streetNumber);
    
    uf();
    printf("Please enter the contact's street name: ");
    scanf(" %40[^\n]s",address->street);
      
      
    printf("Do you want to enter an apartment number? (y or n): ");
    scanf(" %c", &option);
    
    
    if (option == 'y' || option == 'Y') {

        printf("Please enter the contact's apartment number: ");
        scanf(" %d", &address->apartmentNumber);
        
    }
    uf();
    printf("Please enter the contact's postal code: ");
    scanf(" %40[^\n]s", address->postalCode);
   
   
    printf("Please enter the contact's city: ");
    scanf(" %40[^\n]s", address->city);
    

}
// Get and store from standard input the values for Numbers
// Put your code here that defines the Contact getNumbers function:
void getNumbers(struct Numbers *numbers) {
    char option;
    
    printf("Do you want to enter a cell phone number? (y or n): ");
    scanf(" %c", &option);
   
   
    if (option == 'y' || option == 'Y') {
        printf("Please enter the contact's cell phone number: ");
        scanf(" %25s", numbers->cell);
        
    }

    printf("Do you want to enter a home phone number? (y or n): ");
    scanf(" %c", &option);
    
    
    if (option == 'y' || option == 'Y') {
        printf("Please enter the contact's home phone number: ");
        scanf(" %25s", numbers->home);
  
    }
    printf("Do you want to enter a business phone number? (y or n): ");
    scanf("\n%c", &option);
    
    
    if (option == 'y' || option == 'Y') {
        printf("Please enter the contact's business phone number: ");
        scanf("%25s", numbers->business);
      
    }

}

