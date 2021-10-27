/*WAP to print a table
  */
#include<stdio.h>
int main()
{
	int x,count=1;
	printf("Enter a numbers\n");
	scanf("%d",&x);
	while(count<=10)
	{
	  printf("%d x %d = %d\n",x,count,x*count);
	  	++count;
	}
	
	return 0;
	
}
