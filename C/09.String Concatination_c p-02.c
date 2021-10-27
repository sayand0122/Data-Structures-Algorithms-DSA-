#include<stdio.h>
#include<string.h>
int main()
{
	char a[50]= "CAPTAIN";
	char b[] = " KRITHIK";
	
	printf("%s",a);
	strcat(a,b);
	strcat(a, " MAHARANA");
	
	
	printf("\n%s",a);

  return 0;
}
