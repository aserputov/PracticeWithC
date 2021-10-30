//==============================================
// Name:Anatoliy           Full name here Serputov
// Student Number: 167389188
// Email:          aserputov@myseneca.ca
// Section:        NZZ
// Workshop:       3 (in-lab)
//==============================================

#include <stdio.h>

int main(void)
{
    int low,high,days;
    printf("---=== IPC Temperature Analyzer ===---");
   for(days=1;days<4;days++)
   {
     printf("\nEnter the high value for day %d: ",days);
     scanf("%d",&high);
     printf("\nEnter the low value for day %d: ",days);
     scanf("%d",&low);

     if(low < -40 || high>40 || high<low) {
      printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n" );
      days -=1 ;
   }
   }
   
    return 0;
}

