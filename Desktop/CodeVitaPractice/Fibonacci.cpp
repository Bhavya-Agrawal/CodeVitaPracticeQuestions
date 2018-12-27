#include<iostream>
using namespace std;

int fibonacci(int);

int main()
{
	int n1=0,value=0;
	cout<<"Enter the term you want to find"<<endl;
	cin>>n1;

	value = fibonacci(n1);

	cout<<"The desired value == "<<value<<endl;

	return 0;
}

int fibonacci(int n)
{
	if(n==1)
		return 0;
	if(n==2)
		return 1;
	else
		return(fibonacci(n-1)+fibonacci(n-2));
}