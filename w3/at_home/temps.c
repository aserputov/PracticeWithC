//==============================================
// Name:Anatoliy           Full name here Serputov
// Student Number: 167389188
// Email:          aserputov@myseneca.ca
// Section:        NZZ
// Workshop:       3 (at_home)
//==============================================

#include <stdio.h>

int main(void)
{
    int low,high,days,max,min,dmax,dmin;
    double meanl,meanh,mean;
    max=0;
    printf("---=== IPC Temperature Analyzer ===---");
   for(days=0;days<4;days++)
   {
     printf("\nEnter the high value for day %d: ",days+1);
     scanf("%d",&high);
     printf("\nEnter the low value for day %d: ",days+1);
     scanf("%d",&low);
    
     if(high>max){
       max = high;
       dmax=days+1;  
     }
     if(low<min){
       min = low;
       dmin = days+1;
     }
     if(low < -40 || high>40 || high<low) {
      printf("\nIncorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n" );
      days -=1;}
     else{ 
     mean += high + low; 
     meanl += low;
     meanh += high;
     }
     
    
   }
  
    meanl=meanl/days;
    meanh=meanh/days;
    mean= (meanl+meanh)/2;
   printf("\nThe average (mean) LOW temperature was: %.2lf\n",meanl);
   printf("The average (mean) HIGH temperature was: %.2lf\n",meanh);
   printf("The average (mean) temperature was: %.2lf\n",mean );

   
   printf("The highest temperature was %d,",max);
   printf(" on day %d\n",dmax); 
   printf("The lowest temperature was %d,",min);
   printf(" on day %d\n",dmin); 
   return 0;
}
