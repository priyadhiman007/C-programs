#include<stdio.h>
#include<conio.h>
int  main()
{
	int i,j,k,l,n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(k=(n-1);k>=1;k--)
	{
		for(l=k;l>=1;l--)
		{
			printf("%d",l);
		}
		printf("\n");
	}
	return 0;
}
