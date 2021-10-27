#include<stdio.h>

void addition();
void substraction();
void multiplication();
void division();
void input();
void output();


int x,a,b,c,choice=1;
int main()
{
while(choice == 1)
{
	
	
	printf("1. Addition\n");
	printf("2. Substraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Exit\n");
	printf("Enter your Number:\n ");
	scanf("%d", &x);
    switch(x)
    { 
	case 1: 
	        addition();
	        break;
	case 2: 
	        substraction();
	        break;
	
	case 3: 
	        multiplication();
	        break;
	case 4: 
	        division();
	        break;
	default:
	        break;
    }
	    printf("Do you want to continue ? Press 1.\n");
	    scanf("%d",&choice);
}
	   
	return 0;
}

void addition()
{
            input();
	        c = a+b;
	        output();
	
}
void substraction()
{
             input();
	        c = a-b;
	        output();	
}
void multiplication()
{
             input();
	        c = a*b;
	        output();	
}
void division()
{
             input();
	        c = a/b;
	        output();	
}
void input()
{
  printf("Enter two Numbers: \n");
  scanf("%d %d",&a , &b);
}

void output()
{
  printf("Your Result is %d\n",c);	
}















