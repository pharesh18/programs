#include<iostream>
using namespace std;

int main(){
	int row = 5;
	int i, j, k;
	int num = 1;
	for(i=0; i<=row*2-1; i+=2){
		for(j=i; j<row * 2; j++){
			cout<<" ";
		}
		for(k=0; k<=i; k++){
			cout<<"* ";
		}
		cout<<"\n";
	}
	
	for(i=0; i<=row*2-1; i+=2){
		for(j=0; j<=i; j++){
			cout<<" ";
		}
		for(k=i; k<row * 2; k++){
			cout<<"* ";
		}
		cout<<"\n";
	}	
	return 0;
}