/*WAP to find Quotient and remainder
  */
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter 2 numbers\n");
	scanf("%d %d",&x,&y);
	if(y==0)
	printf("Denominator cannot be zeero");
	else
	{
		printf("\nQuotient is %d", x/y);
		printf("\nRemainder is %d",x%y);
	}
	return 0;
	
}
