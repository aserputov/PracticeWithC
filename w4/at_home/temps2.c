//==============================================
// Name:Anatoliy           Full name here Serputov
// Student Number: 167389188
// Email:          aserputov@myseneca.ca
// Section:        NZZ
// Workshop:       4 (in-lab)
//==============================================

#include <stdio.h>

int main(void)
{
    int days,i,max,d1,min,d2,d3;
    double av;
    int h[10];
    int l[10];
    printf("---=== IPC Temperature Calculator V2.0 ===---\n");
    printf("Please enter the number of days, between 3 and 10, inclusive: ");
    scanf("%d",&days);
    if(days>10 || days<3){
        printf("\nInvalid entry, please enter a number between 3 and 10, inclusive: ");
        scanf("%d",&days);
        printf("\n");
    }
    max = -9999;
    min = 9999;
    for(i=0;i<days;i++)
    {
        printf("Day %d ",i+1);
        printf("- High: ");
        scanf("%d",&h[i]);
        printf("Day %d ",i+1);
        printf("- Low: ");
        scanf("%d",&l[i]);
        
        if(h[i]>max)
        {
            max = h[i];
            d1 = i+1;
        }
        if(l[i]<min)
        {
            
            min = l[i];
            d2 = i+1;
        }
    }
    printf("\nDay  Hi  Low\n");
    for(i=0;i<days;i++){
        printf("%d    ",i+1);
        printf("%d    ", h[i]);
        printf("%d\n", l[i]);
    }
    printf("\nThe highest temperature was %d,",max);
    printf(" on day %d",d1);
    printf("\nThe lowest temperature was %d,",min);
    printf(" on day %d\n",d2);
    
    av=0;
    do{
        printf("\nEnter a number between 1 and 5 to see the average temperature for the entered number of days, enter a negative number to exit: ");
        scanf("%d",&d3);
        printf("\n");
        while(d3 == 0 || d3 > 5 ){
            printf("Invalid entry, please enter a number between 1 and 5, inclusive: ");
            scanf("%d",&d3);printf("\n");
        }
        if(d3 < 0){
            break;
        }
        for(i=0;i<d3;i++){
            av += h[i]+l[i];
        }
        av /= d3*2;
        printf("The average temperature up to day %d",d3);
        printf(" is: %.2f\n",av);
        av=0;
        
    }while(d3 > -1);
    
    printf("Goodbye!\n");
    
    return 0;
}
