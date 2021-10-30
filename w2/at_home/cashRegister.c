

//==============================================

// Name:Anatoliy           Full name here Serputov

// Student Number: 167389188

// Email:          aserputov@myseneca.ca

// Section:        NZZ

// Workshop:       2 (in-lab)

//==============================================


#include <stdio.h>


int main(void)

{

    double a,c;

    int b;

    printf("Please enter the amount to be paid: $");

    scanf("%lf",&a);

        c = a*0.13;

        a = a +c;

    printf("GST: %.2lf\n",c);

    printf("Balance owing: $%.2lf\n",a);

        b = a / 1 ;

    printf("Loonies required: %d, ",b);

        a = a-b ;

    printf("balance owing $%.2lf\n",a);

        b = a/0.25;

    printf("Quarters required: %d, ",b);

        a = a - b*0.25;

    printf("balance owing $%.2lf\n",a);

        b = a/0.1;

    printf("Dimes required: %d, ",b);

        a = a - b*0.1;

    printf("balance owing $%.2lf\n",a);

        b = a/0.05;

    printf("Nickels required: %d, ",b);

        a = a - b*0.05;

    printf("balance owing $%.2lf\n",a);

        b = a/0.01;

    printf("Pennies required: %d, ",b+1);

    printf("balance owing $0.00\n");

    

    

    return 0;

}
	
