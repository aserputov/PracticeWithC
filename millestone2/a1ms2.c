//==============================================
// Name:           Anatoliy Serputov
// Student Number: #########
// Email:          ASERPUTOV@myseneca.ca
// Section:        NZZ
// Date:
//==============================================
// Assignment:     1
// Milestone:      2
//==============================================

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


int main (void)
{
    // Declare variables here:
    struct Name name ={{0}};
    struct Address add ={0};
    struct Numbers num ={{0}};
    char ch = 0;

    // Display the title
    printf("Contact Management System\n-------------------------\n");

    // Contact Name Input:
    printf("Please enter the contact's first name: ");
    scanf("%30s",name.firstName);
    uf();
    printf("Do you want to enter a middle initial(s)? (y or n): ");
    scanf("%c",&ch);
    uf();
    if (ch == 'y' || ch == 'Y') {
    
        printf("Please enter the contact's middle initial(s): ");
        scanf("%7[^\n]", name.middleInitial);
        uf();
    }
    
       
    
    printf("Please enter the contact's last name: ");
    scanf("%20[^\n]",name.lastName);
    uf();
    // Contact Address Input:
    printf("Please enter the contact's street number: ");
    scanf("%d",&add.streetNumber);
    uf();
    printf("Please enter the contact's street name: ");
    scanf("%20[^\n]",add.street);
    uf();
    printf("Do you want to enter an apartment number? (y or n): ");
    scanf("%c",&ch);
    uf();
    if(ch == 'y' || ch == 'Y'){
           printf("Please enter the contact's apartment number: ");
         scanf("%d",&add.apartmentNumber);
         uf();
       }
    printf("Please enter the contact's postal code: ");
    scanf("%8[^\n]",add.postalCode);
    uf();
    printf("Please enter the contact's city: ");
    scanf("%30[^\n]",add.city);
    uf();
    
    // Contact Numbers Input:

    printf("Do you want to enter a cell phone number? (y or n): ");
    scanf("%c",&ch);
     uf();
    if(ch == 'y' || ch == 'Y'){
            printf("Please enter the contact's cell phone number: ");
            scanf("%20[^\n]",num.cell);
         uf();
       }
   
    
    // Display Contact Summary Details

    printf("Do you want to enter a home phone number? (y or n): ");
    scanf("%c",&ch);
     uf();
    if(ch == 'y' || ch == 'Y'){
         printf("Please enter the contact's home phone number: ");
         scanf("%20[^\n]",num.home);
         uf();
    }
    printf("Do you want to enter a business phone number? (y or n): ");
    scanf("%c",num.business);
     uf();
    if(ch == 'y' || ch == 'Y'){
            printf("Please enter the contact's business phone number: ");
            scanf("%20[^\n]",num.business);
         uf();
       }
    // Display Completion Message
    printf("\n");
    printf("Contact Details\n---------------\n");
    printf("Name Details:\n");
    printf("First name: %s\n",name.firstName);
    printf("Middle initial(s): %s\n",name.middleInitial);
    printf("Last name: %s\n\n",name.lastName);
    printf("Address Details:\n");
    printf("Street number: %d\n",add.streetNumber);
    printf("Street name: %s\n",add.street);
    printf("Apartment: %d\n",add.apartmentNumber);
    printf("Postal code: %s\n",add.postalCode);
    printf("City: %s\n\n",add.city);
    printf("Phone Numbers:\n");
    printf("Cell phone number: %s\n",num.cell);
    printf("Home phone number: %s\n",num.home);
    printf("Business phone number: %s\n\n",num.business);
    printf("Structure test for Name, Address, and Numbers Done!\n");
    

    return 0;
}

/*  SAMPLE OUTPUT:
    
    Contact Management System
    -------------------------
    Please enter the contact's first name: Tom
    Do you want to enter a middle initial(s)? (y or n): y
    Please enter the contact's middle initial(s): L. A.
    Please enter the contact's last name: Wong Song
    Please enter the contact's street number: 20
    Please enter the contact's street name: Keele Street
    Do you want to enter an apartment number? (y or n): y
    Please enter the contact's apartment number: 40
    Please enter the contact's postal code: A8A 4J4
    Please enter the contact's city: North York
    Do you want to enter a cell phone number? (y or n): Y
    Please enter the contact's cell phone number: 9051116666
    Do you want to enter a home phone number? (y or n): Y
    Please enter the contact's home phone number: 7052227777
    Do you want to enter a business phone number? (y or n): Y
    Please enter the contact's business phone number: 4163338888
    Contact Details
    ---------------
    Name Details:
    First name: Tom
    Middle initial(s): L. A.
    Last name: Wong Song
    Address Details:
    Street number: 20
    Street name: Keele Street
    Apartment: 40
    Postal code: A8A 4J4
    City: North York
    Phone Numbers:
    Cell phone number: 9051116666
    Home phone number: 7052227777
    Business phone number: 4163338888
    Structure test for Name, Address, and Numbers Done!
*/

