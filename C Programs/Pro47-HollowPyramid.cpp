#include<iostream>
using namespace std;

int main(){
	int row = 10;
	int i, j, k;
	int num = 1;
	for(i=0; i<=row*2-1; i+=2){
		for(j=i; j<row * 2; j++){
			cout<<" ";
		}
		for(k=0; k<=i; k++){
			if(i==row*2-2){
				cout<<"* ";
			}else if(k==0 || k==i){
				cout<<"* ";		
			}else{
				cout<<"  ";
			}
		
		}
		cout<<"\n";
	}
	return 0;
}