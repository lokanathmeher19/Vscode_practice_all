#include <bits/stdc++.h>   // Include standard libraries
using namespace std;       // Use standard namespace

class solution{
public:
    // Function to count vowels in a string
    int countVowels(string str){
        int vowels = 0;   // Variable to store vowel count

        for(int i = 0; i < str.length(); i++){   // Loop through string
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||
               str[i]=='o'||str[i]=='u'||str[i]=='A'||
               str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
                vowels++;   // Increase count if vowel found
            }
        }
        return vowels;   // Return total vowels
    }
};

int main(){

    string input;            // Declare string variable
    getline(cin, input);     // Take full line input

    solution obj;            // Create object of class

    cout << obj.countVowels(input) << endl;   // Print vowel count

}