#include<iostream>
#include<string>
using namespace std;

int main()
{
	int i,j;
	string str,str1;
	// input a string
	getline(cin,str);

	//adding a character at the end of the string
	/*str.push_back('b');
	cout<<"string after push_back    "<<str<<'\n';

	j = str.length();
	cout<<str.length()<<'\n';
	cout<<str.capacity()<<'\n';

	for(i=0;i<j;i++)
	{
		//poping a character from the end of the string
		str.pop_back();
		cout<<str<<'\n';
	}*/

	std::string::iterator it;
	for(it=str.begin();it!=str.end();it++)
	{
		cout<<*it<<endl;
	}

	std::string::reverse_iterator it1;
	for(it1=str.rbegin();it1!=str.rend();it1++)
		cout<<*it1<<endl;

	return 0;
}
