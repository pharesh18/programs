#include <iostream>
using namespace std;

string intToRoman(int num) {
    const int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string result = "";

    for (int i = 0; i < sizeof(values) / sizeof(values[0]); ++i) {
        while (num >= values[i]) {
            num -= values[i];
            result += symbols[i];
        }
    }

    return result;
}

int main() {
    int decimalNumber;

    cout<<"\n Enter a decimal number: ";
    cin>>decimalNumber;

    if (decimalNumber <= 0 || decimalNumber > 3999) {
        cout<<"\n\n Invalid input. Please enter a number between 1 and 3999.\n";
    } else {
        string romanNumeral = intToRoman(decimalNumber);
        cout<<"\n Roman numeral: "<<romanNumeral<<"\n";
    }

    return 0;
}
