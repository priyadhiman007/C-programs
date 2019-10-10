#include <stdio.h>
#include <math.h>
//Function to convert binary to decimal
int convertB2D(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
//Function to convert decimal to binary
long long convertD2B(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;
    while (n!=0)
    {
        remainder = n%2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, remainder, n/2);
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}
int main()
{
    long long n;
    int choice,num;
	char ch;
	printf ("**** MENU ****\n");
	printf ("\n1.Convert from Binary to Decimal");
	printf ("\n2.Convert from Decimal to Binary\n");
	do
	{
		printf ("\nEnter your choice: ");
		scanf ("%d",&choice);//Entering choice
		switch(choice)
		{
			case 1: printf("Enter a binary number: ");
    				scanf("%lld", &n);
    				printf("%lld in binary = %d in decimal", n, convertB2D(n));
					break;
			case 2: printf("Enter a decimal number: ");
    				scanf("%d", &num);
    				printf("%d in decimal = %lld in binary", num, convertD2B(num));
					break;
			default:printf("Wrong choice");
		}	
		printf ("\n\nPress '1' to continue and any other integer to exit: ");
		scanf ("%d",&ch);
	}while(ch==1);
    return 0;
}

