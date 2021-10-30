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

    double a;

    int b;

    

    printf("Please enter the amount to be paid: $");

    scanf("%lf",&a);

        b = a / 1 ;

    printf("Loonies required: %d, ",b);
        a = a-b ;
    printf("balance owing $%.2lf\n",a);

        b = a/0.25;

    printf("Quarters required: %d, ",b);

        a= a - b*0.25;

    printf("balance owing $%.2lf\n",a);

    

    return 0;

}
