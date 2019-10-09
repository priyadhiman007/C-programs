#include<stdio.h>
#include<math.h>
//function to check armstrong number.
int armstrong(int num)
{
	int ori,rem,res=0,n;
	ori=num;
	while(num!=0)
	{
		num/=10;
		++n;
	}
	while(ori!=0)
	{
		rem=ori%10;
		res+=pow(rem,n);
		ori/=10;
	}
	return res;
}
int main()
{
	int num,check;
	printf("Enter a number : ");
	scanf("%d",&num);
	check=armstrong(num);//function call
	if(num==check)
		printf("%d is an armstrong number",num);
	else
		printf("%d is not an armstrong number",num);
	return 0;
}
