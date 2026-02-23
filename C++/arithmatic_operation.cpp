#include <bits/stdc++.h>   // Includes all standard C++ libraries
using namespace std;       // Allows use of cin, cout without std::

class solution {           // Define a class named solution
public:                    // Public access specifier (functions accessible outside class)

    // Function to add two numbers
    int add(int a, int b) {
        return a + b;      // Return sum of a and b
    }
    
    // Function to subtract two numbers
    int subtract(int a, int b) {
        return a - b;      // Return difference of a and b
    }
    
    // Function to multiply two numbers
    int multiply(int a, int b) {
        return a * b;      // Return product of a and b
    }
    
    // Function to divide two numbers
    int divide(int a, int b) {
        return a / b;      // Return division result
    }
};

int main() {               // Program execution starts from here

    int a, b;              // Declare two integer variables

    cin >> a >> b;         // Take input for a and b

    solution obj;          // Create object of class solution

    cout << obj.add(a,b) << endl;        // Print addition result
    cout << obj.subtract(a,b) << endl;   // Print subtraction result
    cout << obj.multiply(a,b) << endl;   // Print multiplication result

    if(b == 0) {                          // Check division by zero
        cout << "Undefined" << endl;      // Print message if b is zero
    } else {
        cout << obj.divide(a,b) << endl;  // Print division result
    }

    return 0;              // End program successfully
}