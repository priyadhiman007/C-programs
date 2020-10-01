#include<iostream>

using namespace std;
void fib(int num){
int x=0,y=1,z=0;
for(int i=0;i<num;i++){
cout<<x<<"";
z=x+y;
x=y;
y=z;
}
}
int main(){
int n;
cout<<"Enter n:";
cin>>n;
cout<<"\nThe fibonacci series:";
fib(n);
return0;
}
