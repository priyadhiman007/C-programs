#include<iostream>
using namespace std;

//function tofind factorial of a number
unsigned int factorial(unsigned int n)
{
int res=1,i;
for(i=2;i<=n;i++)
res*=i;
return res;
}

int main()
{
int num;
cout<<"Enter a number: ";
cin>>num;
cout<<"Factorial of "
<<num<<" is "
<<factorial(num)<<endl;
return 0;
}
