#include <stdio.h>
void main()
{
	
int num,last_digit,new_last;
printf("ENTER THE USER INPUT : ");
scanf("%d",&num);
while(num!=0)
{
	last_digit=num%10;
	new_last=last_digit;
//	printf("%d",last_digit);
    num=num/10;
	
	
}
if(num==new_last)
{
	printf("p");
}
else
{
    printf("np");	
}
}

