#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str,op,data;

	//input the string or expression
	cout<<"enter the expression"<<endl;
	getline(cin,str);
	
	int n1=0,n2=0,top=-1,i=0,value=0,maxstk=0,count=0;

	int stack[20];
	maxstk = 20;


	cout<<str.length()<<endl;
	//for(i=0;i<str.length();i++)
	while(i<=str.length()-1)
	{
		//cout<<"i=="<<i<<endl;
		cout<<"str[i]=="<<str[i]<<endl;
		if(top!=maxstk)
		{

		//while str[i] is neither a , nor a null character
		while(str[i]!=','&&str[i]!='\0')
		{	
		if(str[i]>='0'&&str[i]<='9')
		{
			
			data+=str[i];
			//right now the ascii value of the no is entered into the stack so to convert string to int and adding the no to stack use stoi
			count = 1;
			cout<<"data=="<<data<<endl;
		}

		else if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
		{
			count = 0;
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
		}

		//cout<<stack[top]<<endl;
		
		i+=1;

		}

		//inserting numerical value onto the stack
		if(count==1)
		{
		top+=1;
		stack[top] = stoi(data);
		cout<<"stack[top]=="<<stack[top]<<endl;
		data.clear();
		count=0;
		}

		i+=1;

		}
	}

	//printing out the final value from postfix evaluation
	cout<<"The value of the expression is ======> "<<stack[top]<<endl;
	return 0;
}