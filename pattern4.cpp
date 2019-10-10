#include<stdio.h>
#include<conio.h>
int  main()
{
	int i,j,n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	i=n;
	while(i!=0)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
		i--;
	}
}
