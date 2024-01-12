#include<iostream>
using namespace std;
char p[20];
int stack[10];
int a,b;
int ans=0;
int j=0,s=0;
void push();
void pop();
int main(){
	cout<<"\n\tENTER RIGHT PARANTHESES ')' AT THE END OF YOUR EXPRESSION\n\n";
	back:
	cout<<"Enter your expression : ";
	cin>>p;
	cout<<"\ninputed expression = "<<p;
	while(p[s]!=')')
	{
		if(p[s]>=48&&p[s]<=57)
		{
			push();
		}
		else if(p[s]=='+'||p[s]=='-'||p[s]=='*'||p[s]=='/')
		{
			pop();
			switch(p[s])
			{
				case '+':
				{
					ans = b + a;
					break;
				}
				case '-':
				{
					ans = b - a;
					break;
				}
				case '*':
				{
					ans = b * a;
					break;
				}
				case '/':
				{
					if(a==0)
					{
						cout<<"\n\tTRIED TO DEVIDE BY ZERO. PLEASE ENTER ANY OTHER EQUASION\n\n";
						goto back;
					}
					ans = b / a;
					break;
				}
			}
			j++;
			stack[j]=ans;
		}
		else
		{
			cout<<"\n\n\tSOME INVALID CHARACTER YOU HAVE INPUTED\n\n";
			goto back;
		}
		s++;
	}
	cout<<"\n\n Answer = "<<stack[j];

	return 0;
}

void push()
{
	j++;
	stack[j] = p[s]-48;
}

void pop()
{
    a = stack[j];
    b = stack[j-1];
    j=j-2;
}