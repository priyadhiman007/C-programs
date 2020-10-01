//program to print fibonacci series
#include <bits/stdc++.h>
using namespace std;

//Function returning asked fibonacci number.
int fibb(int n)
{
	//base case
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	//induction hypothesis
	int ans1=fibb(n-1);
	int ans2=fibb(n-2);
	//induction step
	int myAns=ans1+ans2;
	return myAns;
}
int main()
{
	int n,f,i;
	cout<<"Enter number of fibonacci series elements to display: ";
	cin>>n;
	cout<<n<<" numbers of fibonacci series are as follows:"<<endl;
	for(i=0;i<n;i++){
        f=fibb(i);//function call
        cout<<f<<"  ";
	}
	return 0;
}
