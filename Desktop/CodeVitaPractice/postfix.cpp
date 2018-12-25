#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str,op,data;

	//input the string or expression
	cout<<"enter the expression"<<endl;
	getline(cin,str);
	
	int n1=0,n2=0,top=-1,i,value=0,maxstk=0;

	int stack[20];
	maxstk = 20;


	for(i=0;i<str.length();i++)
	{
		//cout<<str[i]<<endl;
		if(top!=maxstk)
		{
		if(str[i]>='0'&&str[i]<='9')
		{
			//cout<<stack[top]<<endl;
			//cout<<"str[i]=="<<str[i]<<endl;
			top+=1;

			data+=str[i];
			//right now the ascii value of the no is entered into the stack so to convert string to int and adding the no to stack use stoi
			stack[top] = stoi(data);
			cout<<"stack[top]=="<<stack[top]<<endl;
			data.clear();
		}

		else if(str[i] == ',')
		{
			//do nothing
		}

		else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
		{
			//take the operation into the op string
			op+=str[i];
			n2 = stack[top];
			cout<<"n2=="<<n2<<endl;
			top-=1;
			n1 = stack[top];
			cout<<"n1=="<<n1<<endl;
			top-=1;
			//applying the operation on the 2 values obtained from the stack

			if(op == "+")
				value = n1+n2;
			else if(op == "-")
				value = n1-n2;
			else if(op == "*")
				value = n1*n2;
			else if(op == "/")
			{
				if(n2!=0)
				value = n1/n2;
			}

			cout<<"value=="<<value<<endl;
			top+=1;
			stack[top] = value;
		//clear the op string
		op.clear();	
		//cout<<op<<endl;		
		}

		//cout<<stack[top]<<endl;
		}
		else
		{}
	}

	//printing out the final value from postfix evaluation
	cout<<"The value of the expression is ======> "<<stack[top]<<endl;
	return 0;
}