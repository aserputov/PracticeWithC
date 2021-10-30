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
    int days,i,d,a;
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
    d = 1;
    a=0;
    for(i=0;i<days;i++)
    {
        printf("Day %d ",d);
        printf("- High: ");
        scanf("%d",&h[a]);
        printf("Day %d ",d++);
        printf("- Low: ");
        scanf("%d",&l[a]);
        a++;
     
    }
    printf("\nDay  Hi  Low\n");
    d=1;
    a=0;
    for(i=0;i<days;i++){
        printf("%d    ",d++);
        printf("%d    ",h[a]);
        printf("%d\n", l[a]);
        a++;
    }
   
    return 0;
}


	
