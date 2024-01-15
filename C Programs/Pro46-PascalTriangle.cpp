#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	int rows = 5;
	for (int i = 0; i<rows; i++) {
        for (int k=0; k<rows-i; k++) {
            cout<<"   ";
        }
        
        int number = 1;
        for (int j=0; j<=i; j++) {
            cout<<number;
            number = number * (i - j) / (j + 1);
            if (j != i) {
                cout<< "   ";
            }
        }
		cout<<"\n";
    }
    
	return 0;
}