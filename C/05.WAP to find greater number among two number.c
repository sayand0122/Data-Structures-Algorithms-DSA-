/* WAP to print the greatest number amoung two given no.
  
*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);
	if(a>b)
	printf("The Greater number is:%d ",a);
	else
	printf("The Greater number is:%d",b);
	return 0;
}    
