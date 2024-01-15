#include<iostream>
using namespace std;

int a[10] = {45, 23, 78, 56, 78, 32, 16, 10, 3, 1};
int n = 10;
		
void print()
{
	int i;
	cout<<"\nArray status = ";
	for(i=1; i<=n; i++)
		cout<<a[i]<<" ";
}

int quick(int beg, int end)
{
	int loc,left,right;
	int temp;

	left = beg;
	right = end;
	loc = beg;
	read:

	while(a[loc]<=a[right] && loc!=right)
		right--;

	if(loc==right)
		return loc;

	if(a[loc]>a[right])
	{
		temp = a[loc];
		a[loc] = a[right];
		a[right] = temp;
		loc = right;
	}

	while(a[left]<=a[loc] && left!=loc)
		left++;

	if(loc==left)
		return loc;

	if(a[left]>a[loc])
	{
		temp = a[loc];
		a[loc] = a[left];
		a[left] = temp;
		loc = left;
		goto read;
	}
	return 0;
}

int main()
{
	int stack1[10],stack2[10];
	int top=0;
	int beg,end;
	int i,loc;
	
	if(n>1)
	{
		top++;
		stack1[1] = 1;
		stack2[1] = n;
	}
	
	while(top!=0)
	{
		beg = stack1[top];
		end = stack2[top];
		top--;

		loc = quick(beg,end);
		cout<<"\n";
		print();
		if(beg<loc-1)
		{
			top++;
			stack1[top] = beg;
			stack2[top] = loc-1;
		}
		if(loc+1<end)
		{
			top++;
			stack1[top] = loc+1;
			stack2[top] = end;
		}
	}
	
	cout<<"\n\n\tAfter sorting\n";
	print();
	return 0;
}