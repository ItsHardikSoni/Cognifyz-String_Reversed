#include <iostream>
#include <string>
using namespace std;

// Function to reverse a string using loops
string reverseString(string str) {
    string reversedStr = "";
    // Loop through the string from end to start
    for (int i = str.length() - 1; i >= 0; i--) {
        reversedStr += str[i];  // Append each character to the reversed string
    }
    return reversedStr;
}

int main() {
    string inputString;

    // Input from user
    cout << "Enter a string to reverse: ";
    getline(cin, inputString);

    // Call the function and display the reversed string
    cout << "Reversed string: " << reverseString(inputString) << endl;

    return 0;
}
