#include<iostream>
using namespace std;

int main(){
	int n = 5;
	int i, j;
	for(i=0; i<n*2-1; i++){
		for(j=i; j<n-1; j++){
			cout<<" ";
		}
	}		
	return 0;
}