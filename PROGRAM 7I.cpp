// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: PALINDROME OF A STRING (EXPERIMENT: 7I)

// CODE: 

#include <iostream>
using namespace std;

int main() {
    string str;
    int length, matchCount = 0;

    // Input string...
    cout << "Enter a String: ";
    cin >> str; // will read without spaces...
    length = str.length();

    // Check characters from both ends...
    for (int i = 0; i < length; i++) {
        if (str[i] == str[length - 1 - i]) {
            matchCount++; // count matching positions...
        }
    }

    // If all positions matched, it's a palindrome...
    if (matchCount == length) {
        cout << "It is a Palindrome";
    } else {
        cout << "It is not a Palindrome";
    }

    return 0;
}

// OUTPUT:

// Enter a String: YASH
// It is not a Palindrome

// Enter a String: NAMAN
// It is a Palindrome
