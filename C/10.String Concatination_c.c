#include<stdio.h>
#include<string.h>
int main()
{
	char a[20]= "CAPTAIN";
	char b[20] = " KRITHIK";
	
	printf("%s",a);
	int i = 0,j=0;
	while(a[i] != '\0')
	i++;
	
    while(b[j] != '\0')
    {
    	a[i] = b[j];
    	i++; j++;
	}
	a[i] = '\0';
	
	printf("\n%s",a);

  return 0;
}
