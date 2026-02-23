#include <bits/stdc++.h>   // Includes all standard libraries
using namespace std;       // To use cin, cout without std::

int main() {

    int a;      // First number
    int b;      // Second number
    char op;    // Operator (+, -, *, /)

    cin >> a >> b >> op;   // Take input (example: 10 5 +)

    switch(op){   // Check which operator user entered

        case '+':   // If operator is +
            cout << a + b << endl;   // Addition
            break;

        case '-':   // If operator is -
            cout << a - b << endl;   // Subtraction
            break;

        case '*':   // If operator is *
            cout << a * b << endl;   // Multiplication
            break;

        case '/':   // If operator is /
            if(b == 0)               // Check division by zero
                cout << "Undefined" << endl;
            else
                cout << a / b << endl;   // Division
            break;

        default:   // If invalid operator
            cout << "Invalid Operator" << endl;
    }

    return 0;   // End program
}