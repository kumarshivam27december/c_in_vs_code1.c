#include<stdio.h>
 
int main() {
    int i,j,rows;
    printf("Enter the number of rows\n");
    scanf("%d", &rows);
 
    for(i = 1; i < rows; i++) // row or line control loop
    {
        /* Prints one row of triangle */
        for(j = 1; j <= i; ++j) {
           printf("%d",j);
        }
        /* move to next row */
        printf("\n");
    }
    return 0;
}