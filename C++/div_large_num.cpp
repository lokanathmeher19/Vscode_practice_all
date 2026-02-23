#include <iostream>   // For input and output
#include <iomanip>    // For formatting decimal output
using namespace std;  // To use cin, cout without std::

int main() {

    long long a;   // Declare variable a (large integer)
    int b;         // Declare variable b (integer)

    cin >> a;      // Take input for a
    cin >> b;      // Take input for b

    if (b == 0) {   // Check if b is zero
        cout << "Division by zero is not allowed." << endl;  // Print error message
    } 
    else {
        cout << fixed << setprecision(2)   // Set output to 2 decimal places
             << (double)a / b              // Convert a to double and divide by b
             << endl;                      // Move to next line
    }

    return 0;   // End program successfully
}