#include <bits/stdc++.h>   // Include standard libraries
using namespace std;       // Use standard namespace

class solution{
public:
    // Function to calculate total length after concatenation
    int lengthAfterConcat(int n, string arr[]) {

        int total = 0;   // Variable to store total length

        for(int i = 0; i < n; i++){   // Loop through all strings
            total = total + arr[i].length();   // Add length of each string
        }

        return total;   // Return total length
    }
};

int main(){

    int n;              // Number of strings
    cin >> n;           // Take size input

    string arr[n];      // Declare string array

    for(int i = 0; i < n; i++){
        cin >> arr[i];  // Take each string input
    }

    solution obj;       // Create object

    cout << obj.lengthAfterConcat(n, arr) << endl;  // Print result

}