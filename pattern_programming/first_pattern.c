#include <stdio.h>
void main()
{
    int i,j,input;
    printf("Enter the number of rows = ");
    scanf("%d",&input);

    for(i=1;i<=input;i++)
    {
        for(j=1;j<=i;j++)
         printf("x ");

    }
    printf("\n");
    

}