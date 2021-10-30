//==============================================

// Name:           Anatoliy Serputov

// Student Number: #########

// Email:          ASERPUTOV@myseneca.ca

// Section:        NZZ

// Workshop:       5 (in-lab)

//==============================================




#define _CRT_SECURE_NO_WARNINGS




#include <stdio.h>




#define SIZE 2







struct Employee {

    int id;

    int age;

    double salary;

};










int main(void)

{

    int option = 0,i=0,r=0;

    

    

    

    struct Employee emp[SIZE]={{0,0,0},{0,0,0}};

    

    

    

    printf("---=== EMPLOYEE DATA ===---\n\n");

    

    do

    {

        printf("1. Display Employee Information\n");

        printf("2. Add Employee\n");

        printf("0. Exit\n\n");

        printf("Please select from the above options: ");

        

        //

        scanf("%d",&option);

        printf("\n");

        

        switch (option)

        {

            case 0:

                printf("Exiting Employee Data Program. Good Bye!!!\n");

                break;

                

                

            case 1:

                

                printf("EMP ID  EMP AGE EMP SALARY\n");

                printf("======  ======= ==========\n");

                for(i=0;i<r;i++){
                    printf("%6d%9d%11.2lf",emp[i].id,emp[i].age,emp[i].salary);

                    printf("\n");

                }

                printf("\n");

                break;

                

            case 2:

                

                printf("Adding Employee\n");

                printf("===============\n");

                

                if(r >= SIZE){

                    printf("ERROR!!! Maximum Number of Employees Reached\n\n");

                }else{

                    printf("Enter Employee ID: ");

                    scanf("%d",&emp[r].id);

                    

                    printf("Enter Employee Age: ");

                    scanf("%d",&emp[r].age);

                    

                    printf("Enter Employee Salary: ");

                    scanf("%lf",&emp[r].salary);

                    printf("\n");

                    r++;

                    

                }

                

                

                

                break;

                printf("Adding Employee\n");

                printf("===============\n");

                

                

            default:

                printf("OH\n");

        }

        

    } while (option != 0);

    

    return 0;

}










//PROGRAM OUTPUT IS SHOW BELOW




/*

 ---=== EMPLOYEE DATA ===---

 

 1. Display Employee Information

 2. Add Employee

 0. Exit

 

 Please select from the above options: 2

 

 Adding Employee

 ===============

 Enter Employee ID: 111

 Enter Employee Age: 34

 Enter Employee Salary: 78980.88

 

 1. Display Employee Information

 2. Add Employee

 0. Exit

 

 Please select from the above options: 2

 

 Adding Employee

 ===============

 Enter Employee ID: 112

 Enter Employee Age: 41

 Enter Employee Salary: 65000

 

 1. Display Employee Information

 2. Add Employee

 0. Exit

 

 Please select from the above options: 2

 

 Adding Employee

 ===============

 ERROR!!! Maximum Number of Employees Reached

 

 1. Display Employee Information

 2. Add Employee

 0. Exit

 

 Please select from the above options: 1

 

 EMP ID  EMP AGE EMP SALARY

 ======  ======= ==========

 111       34   78980.88

 112       41   65000.00

 

 1. Display Employee Information

 2. Add Employee

 0. Exit

 

 Please select from the above options: 0

 

 Exiting Employee Data Program. Good Bye!!!

 

 */
