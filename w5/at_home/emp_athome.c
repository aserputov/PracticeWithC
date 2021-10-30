//==============================================
// Name:           Anatoliy Serputov
// Student Number: #########
// Email:          ASERPUTOV@myseneca.ca
// Section:        NZZ
// Workshop:       5 (in-lab)
//==============================================

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 4


struct Employee {
    int id;
    int age;
    double salary;
};



int main(void)
{
    int option = 0,i=0,r=0,b=0,c=0;
    
    
    
    struct Employee emp[SIZE]={{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
    
    
    
    printf("---=== EMPLOYEE DATA ===---\n\n");
    
    do
    {
        printf("1. Display Employee Information\n");
        printf("2. Add Employee\n");
        printf("3. Update Employee Salary\n");
        printf("4. Remove Employee\n");
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
                for(i=0;i<SIZE;i++){
                    if (emp[i].id)
                        printf("%6d%9d%11.2lf\n",emp[i].id,emp[i].age,emp[i].salary);
                }
                printf("\n");
                break;
                
            case 2:
                
                printf("Adding Employee\n");
                printf("===============\n");
                
                if(r >= SIZE){
                    printf("ERROR!!! Maximum Number of Employees Reached\n\n");
                }
                else{
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
            case 3:
                printf("Update Employee Salary\n");
                printf("======================\n");
                printf("Enter Employee ID: ");
                scanf("%d",&b);
                for(i=0;i<SIZE;i++)
                {
                    if (b==emp[i].id)
                    {
                        printf("The current salary is %.2f\n",emp[i].salary);
                        printf("Enter Employee New Salary: ");
                        scanf("%lf",&emp[i].salary);
                        printf("\n");
                        break;
                    }
                    if (i==SIZE-1)
                    {
                        printf("*** ERROR: Employee ID not found! ***\n");
                        printf("Enter Employee ID: ");
                        scanf("%d",&b);
                        i=-1;
                    }
                        
                        
                }
                break;
            case 4:
                 printf("Remove Employee\n");
                 printf("===============\n");
                 printf("Enter Employee ID: ");
                 scanf("%d",&b);
                   
                for(c=0;c<SIZE;c++){
                    if (b==emp[c].id){
                        emp[c].id = 0 ;
                        r=c;
                        break;
                    }
                    if(c==SIZE-1){
                        printf("*** ERROR: Employee ID not found! ***\n");
                        printf("Enter Employee ID: ");
                        scanf("%d",&b);
                        c=-1;
                    }
                }
                printf("Employee %d will be removed\n\n",b);
        
                
                                  
                break;
            default:
                printf("ERROR: Incorrect Option: Try Again\n\n");
        }
        
    } while (option != 0);
    
    return 0;
}





