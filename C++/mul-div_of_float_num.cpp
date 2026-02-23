#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    double a, b;   // Input variables a and b

    cin >> a >> b;   // Taking input from user

    cout << fixed << setprecision(2);   // Set decimal to 2 places

    cout << a * b << endl;   // Print multiplication

    if (b == 0)   // Check if division by zero
        cout << "Undefined" << endl;   // If zero, print Undefined
    else
        cout << a / b << endl;   // Otherwise print division result

    return 0;   // End of program
}