//==============================================
// Name:           Serputov Anatoliy
// Student Number:
// Email:          aserputov@myseneca.ca
// Section:        NZZ
// Date:
//==============================================
// Assignment:     2
// Milestone:      2
//==============================================
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// This source file needs to "know about" the functions you prototyped
//       in the contact helper header file.
// HINT: Put the header file name in double quotes so the compiler knows
//       to look for it in the same directory/folder as this source file
//       #include your contactHelpers header file on the next line:
#include "contactHelpers.h"



//--------------------------------
// Function Definitions
//--------------------------------

// +-------------------------------------------------+
// | ====== Assignment 2 | Milestone 2 =======       |
// +-------------------------------------------------+
// | NOTE:  Copy/Paste your Assignment-2 Milestone-1 |
// |        empty function definitions below and     |
// |        complete the definitions as per the      |
// |        Milestone-2 specifications               | 
// |                                                 |
// | - The clearKeyboard function is done for you    |
// +-------------------------------------------------+


// Clear the standard input buffer

void clearKeyboard(void)
{
	while (getchar() != '\n'); // empty execution code block on purpose
}

// pause function definition goes here:
void pause(void)
{
	printf("(Press Enter to Continue)");
	clearKeyboard();
}

// getInt function definition goes here:
int getInt(void)
{
	char NL = 'x';
	int value;
	scanf("%d%c", &value, &NL);
	if (NL != '\n')
	{
		clearKeyboard();
	}

	while (NL != '\n')
	{
		printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		scanf("%d%c", &value, &NL);

		if (NL != '\n')
		{
			clearKeyboard();
		}

	}

	return value;
}

// getIntInRange function definition goes here:
int getIntInRange(int min, int max)
{
	int value;
	do
	{
		value = getInt();
		if (value < min || value > max)
		{
			printf("*** OUT OF RANGE *** <Enter a number between %d and %d>: ", min, max);
		}
	} while (value > max || value < min);

	return value;
}

// yes function definition goes here:
int yes() {

	int  flag = 0;
	char yes, NL;

	do {

		scanf(" %c%c", &yes, &NL);
		if (NL != '\n') {

			clearKeyboard();
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");

		}

		else if (yes == 'y' || yes == 'Y' || yes == 'n' || yes == 'N')
		flag = 1;

		else {

			clearKeyboard();
			printf("*** INVALID ENTRY *** <Only (Y)es or (N)o are acceptable>: ");

		}

	} while (flag != 1);

	if (yes == 'y' || yes == 'Y')

		return 1;

	else

		return 0;

}

// menu function definition goes here:
int menu(void)
{
	int menu;
	printf("Contact Management System\n");
	printf("-------------------------\n");
	printf("1. Display contacts\n");
	printf("2. Add a contact\n");
	printf("3. Update a contact\n");
	printf("4. Delete a contact\n");
	printf("5. Search contacts by cell phone number\n");
	printf("6. Sort contacts by cell phone number\n");
	printf("0. Exit");
	printf("\n");
	printf("\nSelect an option:> ");

	menu = getIntInRange(0, 6);


	return menu;
}

// contactManagerSystem function definition goes here:
void contactManagerSystem(void) {

	int option = 0, option2 = 0;

	do {
		option2 = menu();

		if (option2 == 1)
		{
			printf("\n<<< Feature 1 is unavailable >>>\n\n");
			pause();
			printf("\n");
		}

		else if (option2 == 2) {

			printf("<<< Feature 2 is unavailable >>>\n\n");
			pause();
			printf("\n");
		}

		else if (option2 == 3) {

			printf("<<< Feature 3 is unavailable >>>\n\n");
			pause();
			printf("\n");
		}

		else if (option2 == 4) {

			printf("\n<<< Feature 4 is unavailable >>>\n\n");
			pause();
			printf("\n");

		}

		else if (option2 == 5) {

			printf("\n<<< Feature 5 is unavailable >>>\n\n");
			pause();
			printf("\n");
		}

		else if (option2 == 6) {

			printf("\n<<< Feature 6 is unavailable >>>\n\n");
			pause();
			printf("\n");
		}

		else if (option2 == 0) {

			printf("\nExit the program? (Y)es/(N)o: ");
			option = yes();
			printf("\n");

			if (option == 1)

				printf("Contact Management System: terminated\n");
		}

	} while (option != 1);
}

int checkStreetNumber(void)
{
	char nl;
	int value;
	scanf("%d%c", &value, &nl);
	if (nl != '\n')
	{
		clearKeyboard();
	}
	while (nl != '\n') {
		printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		scanf("%d%c", &value, &nl);
		if (nl != '\n')
		{
			clearKeyboard();
		}
	}
	while (value < 0) {
		printf("*** INVALID STREET NUMBER *** <must be a positive number>: ");
		scanf("%d%c", &value, &nl);
		if (nl != '\n') {
			clearKeyboard();
		}
	}
	return value;
}

int checkApartmentNumber(void)
{
	char nl;
	int value;
	scanf("%d%c", &value, &nl);
	if (nl != '\n')
	{
		clearKeyboard();
	}
	while (nl != '\n') {
		printf("*** INVALID INTEGER *** <Please enter an integer>: ");
		scanf("%d%c", &value, &nl);
		if (nl != '\n')
		{
			clearKeyboard();
		}
	}
	while (value < 0) {
		printf("*** INVALID APARTMENT NUMBER *** <must be a positive number>: ");
		scanf("%d%c", &value, &nl);
		if (nl != '\n') {
			clearKeyboard();
		}
	}
	return value;
}
