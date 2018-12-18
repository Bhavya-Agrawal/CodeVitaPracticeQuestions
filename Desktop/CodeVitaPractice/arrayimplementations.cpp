#include<iostream>
using namespace std;

int main()
{
	int i,j;
	int arr[2][3];

	cout<<sizeof(arr)/sizeof(arr[0])<<'\n';
	cout<<sizeof(arr[0])/sizeof(arr[0][0])<<'\n';

	for(i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		for(j=0;j<sizeof(arr[0])/sizeof(arr[0][0]);j++)
		{
			arr[i][j]=i;
			cout<<  arr[i][j]  <<'\n';
		}
	}

	return 0;
}
