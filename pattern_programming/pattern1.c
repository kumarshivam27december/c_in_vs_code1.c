#include <stdio.h>
void main()
{
    int i,j,input;
    printf("Enter the row number to be printed = ");
    scanf("%d",&input);
    for(i=0;i<=input;i++)
    {
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

}