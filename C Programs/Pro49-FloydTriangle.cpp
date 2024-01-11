#include<iostream>
using namespace std;

int main(){
	int row = 5;
	int i, j;
	int num = 1;
	for(i=1; i<=row; i++){
		for(j=1; j<=i; j++){
			cout<<num<<" ";
			num++;
		}
		cout<<"\n";
	}		
	
	return 0;
}