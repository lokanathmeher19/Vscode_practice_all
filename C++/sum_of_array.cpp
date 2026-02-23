#include <bits/stdc++.h>   // Includes all standard C++ libraries
using namespace std;       // Allows use of cin, cout without std::

class solution {           // Define class named solution
public:

    // Function to calculate sum of array elements
    int arraySum(int arr[], int n) {

        int sum = 0;       // Initialize sum as 0

        for(int i = 0; i < n; i++) {   // Loop from 0 to n-1
            sum = sum + arr[i];        // Add each element to sum
        }

        return sum;        // Return final sum
    }
};

int main() {               // Program execution starts here

    int n;                 // Variable to store size of array
    cin >> n;              // Take input for size

    int arr[n];            // Declare array of size n

    for(int i = 0; i < n; i++) {
        cin >> arr[i];     // Take array elements input
    }

    solution obj;          // Create object of class

    cout << obj.arraySum(arr, n);   // Call function and print result

    return 0;              // End program
}