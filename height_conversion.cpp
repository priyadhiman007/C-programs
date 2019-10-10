#include<stdio.h>
int main()
{
	float a, b;
	int choice;
	char ch;
	printf ("**** MENU ****\n");
	printf ("\n1.Convert from centimeter to feet");
	printf ("\n2.Convert from feet to centimeter\n");
	do
	{
		printf ("\nEnter your choice: ");
		scanf ("%d",&choice);//Entering choice
		switch(choice)
		{
			case 1: printf("Enter height (in cm): ");
					//cm refers to centimeter
					scanf("%f",&a);
					b=a/30.48;
					printf("Height in feet is: %f",b);
					break;
			case 2: printf("Enter height (in feet): ");
					scanf("%f",&a);
					b=a*30.48;
					printf("Height in cm is: %f",b);
					break;
			default:printf("Wrong choice");
		}	
		printf ("\n\nPress '1' to continue and any other integer to exit: ");
		scanf ("%d",&ch);
	}while(ch==1);
	return 0;
}
