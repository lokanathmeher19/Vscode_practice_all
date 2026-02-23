#include <bits/stdc++.h>   // Includes all standard C++ libraries
using namespace std;       // Allows use of cin, cout without std::

class solution {           // Define class named solution
public:

    // Function to print multiplication table of a number
    void table(int n) {

        for(int i = 1; i <= 10; i++) {   // Loop from 1 to 10
            cout << n << " x " << i      // Print number
                 << " = "
                 << n * i               // Multiply n with i
                 << endl;               // Move to next line
        }
    }
};

int main() {               // Program starts from here

    int n;                 // Variable to store number
    cin >> n;              // Take input from user

    solution obj;          // Create object of class

    obj.table(n);          // Call table function

    return 0;              // End program
}