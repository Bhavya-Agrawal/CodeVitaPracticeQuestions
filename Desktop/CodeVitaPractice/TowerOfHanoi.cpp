#include<iostream>
using namespace std;

int Tower(int ,int ,int ,int );

int Tower(int a,int b,int c,int d)
{
	int n=a,BEG=b,AUX=c,END=d;
	if(n==1)
	cout<<BEG<<"->"<<END<<endl;

	else
	{
		Tower(n-1,BEG,END,AUX);
		cout<<BEG<<"->"<<END<<endl;
		Tower(n-1,AUX,BEG,END);
	}
return 0;
}

int main()
{
	//defining disks BEG,AUX,END as 1,2,3 respectively
	int n=0,BEG=1,AUX=2,END=3;
	cout<<"Enter the no of disks"<<endl;
	cin>>n;
	Tower(n,BEG,AUX,END);

	return 0;
}
