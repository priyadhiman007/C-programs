#include<stdio.h>
int main()
{
	int n,a[100],flag=0;
	//a[] is the array to store factors of number n.
	printf("Enter a number: ");
	scanf("%d",&n);
	//loop to store find and store factors in array.
	for(int i=1;i<=n;i++)
	{
		if(n%i==0){
			flag++;
			a[flag]=i;
		}
	}
	//loop to display factors in array.
	for(int j=1;j<=flag;j++)
	{
		printf("%d, ",a[j]);
	}
	printf("are factors of %d",n);
	return 0;
}
