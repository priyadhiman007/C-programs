#include<stdio.h>
int main()
{
	float a, b;
	int choice;
	char ch;
	printf ("**** MENU ****\n");
	printf ("\n1.Convert from Celsius to Fahrenheit");
	printf ("\n2.Convert from Fahrenheit to Celsius\n");
	do
	{
		printf ("\nEnter your choice: ");
		scanf ("%d",&choice);//Entering choice
		switch(choice)
		{
			case 1: printf("Enter temperature in Celsius: ");
					scanf("%f",&a);
					b=(a*9/5)+32;
					printf("Temperature in Fahrenheit is: %f",b);
					break;
			case 2: printf("Enter temperature in Fahrenheit: ");
					scanf("%f",&a);
					b=((a-32)*5)/9;
					printf("Temperature in Celsius is: %f",b);
					break;
			default:printf("Wrong choice");
		}	
		printf ("\n\nPress '1' to continue and any other integer to exit: ");
		scanf ("%d",&ch);
	}while(ch==1);
	return 0;
}
