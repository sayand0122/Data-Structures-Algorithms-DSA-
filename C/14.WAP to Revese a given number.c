/*WAP to Revese a given number
  */
#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a number: \n");
	scanf("%d",&x);
	while(x>0)
	{
	
	y= x%10;
	printf("%d",y);
	x = x/10;
}
	return 0;
	
}
