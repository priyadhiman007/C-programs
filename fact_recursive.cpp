#include<iostream>
using namespace std;

//function tofind factorial of a number
unsigned int factorial(unsigned int n)
{
if(n==0)
    return 1;
return n*factorial(n-1);
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
