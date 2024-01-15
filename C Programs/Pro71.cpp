#include <iostream>
using namespace std;

int romanCharToInt(char c) {
    switch (c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}

int romanToDecimal(string s) {
    int result = 0;

    for (int i = 0; i < s.length(); ++i) {
        int currentVal = romanCharToInt(s[i]);

        if (i < s.length() - 1 && romanCharToInt(s[i + 1]) > currentVal) {
            result -= currentVal;
        } else {
            result += currentVal;
        }
    }

    return result;
}

int main() {
    string romanNumeral;

    cout << "\n Enter a Roman numeral: ";
    cin >> romanNumeral;

    int decimalNumber = romanToDecimal(romanNumeral);

    if (decimalNumber > 0) {
        cout<<"\n Decimal number: "<<decimalNumber<<"\n";
    } else {
        cout<<"\n Invalid Roman numeral.\n";
    }

    return 0;
}
