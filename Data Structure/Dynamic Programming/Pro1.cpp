#include <iostream>
using namespace std;

int fibonacci(int n) {
	int i, cur;
    if (n == 0) return 0;
    if (n == 1) return 1;
    int prev1 = 0, prev2 = 1;

    for (i = 2; i <= n; ++i) {
        cur = prev1 + prev2;
        prev1 = prev2;
        prev2 = cur;
    }

    return prev2;
}

int main() {
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    int result = fibonacci(n);
    cout<<"The "<<n<<" th Fibonacci number is: "<<result;

    return 0;
}
