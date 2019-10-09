#include<stdio.h>
//Function returning factorial of a given number
int fact(int n)
{
	//base case
	if(n==0)
		return 1;
	//induction hypothesis
	int ans=fact(n-1);
	//induction step
	int myAns=n*ans;
	return myAns;
}
int main()
{
	int n,f;
	printf("Enter a number: ");
	scanf("%d",&n);
	f=fact(n);//Function call
	printf("\nFactorial of %d is: %d",n,f);
	return 0;
}
