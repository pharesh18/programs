#include<iostream>
using namespace std;

void post(char val[]);
int main()
{
	char val[50];
	cout<<"\n\t Enter right parantheses ')' at the end of your expression\n\n";
	cout<<"Enter expression : ";
	cin>>val;
	post(val);

	return 0;
}

void post(char q[])
{
	int i=0,j=0,k=0;
	char stack[30];
	char p[30];
	stack[k] = '(';
	for(i=0; q[i]!='\0'; i++)
	{
		if((q[i]>=65 && q[i]<=90) || (q[i]>=97 && q[i]<=122))
		{
			p[j] = q[i];
			j++;
		}

		if(q[i]=='(')
		{
			k++;
			stack[k] = q[i];
		}

		if(q[i]=='+'||q[i]=='-'||q[i]=='*'||q[i]=='/')
		{
			while(1)
			{
				if(q[i]=='+' && (stack[k]=='+'||stack[k]=='-'||stack[k]=='*'||stack[k]=='/'))
				{
					p[j] = stack[k];
					j++;
					k--;
				}
				else if(q[i]=='-' && (stack[k]=='+'||stack[k]=='-'||stack[k]=='*'||stack[k]=='/'))
				{
					p[j] = stack[k];
					j++;
					k--;
				}
				else if(q[i]=='*' && (stack[k]=='*'||stack[k]=='/'))
				{
					p[j] = stack[k];
					j++;
					k--;
				}
				else if(q[i]=='/' && (stack[k]=='*'||stack[k]=='/'))
				{
					p[j] = stack[k];
					j++;
					k--;
				}
				else
				{
					k++;
					stack[k] = q[i];
					goto forward;
				}
			}
		}
		forward:
		if(q[i]==')')
		{
			while(stack[k]!='(')
			{
				p[j] = stack[k];
				j++;
				k--;
			}
			k--;
		}
	}

	cout<<"\n\nAfter infix to postfix operation = ";
	for(i=0; i<j; i++)
	{
		cout<<p[i]<<" ";
	}
}
