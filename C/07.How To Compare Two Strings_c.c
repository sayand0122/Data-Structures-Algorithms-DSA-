#include<stdio.h>
#include<string.h>
int main()
{
	char a[]= "CAPTAIN";
	char b[]= "CAPTAIN";

	if(strcmp(a,b) == 0)
	printf("Strings are equal");
	else
	printf("Strings are not equal");

  return 0;
}
