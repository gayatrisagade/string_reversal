/*
Task: String Reversal

Description:
Write a program that takes a string
as input and reverses it. Display
the reversed string on the
console.
*/

//Program

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Input string
    string inputString;

    // Get input from the user
    cout << "Enter a string: ";
    cin>>inputString;

    // Reverse the string
    string reversedString;
    for (int i = inputString.length() - 1; i >= 0; --i) {
        reversedString += inputString[i];
    }

    // Display the reversed string
    cout << "Reversed String: " << reversedString <<endl;

}

/*
Output:

Enter a string: Gayatri
Reversed String: irtayaG
*/


