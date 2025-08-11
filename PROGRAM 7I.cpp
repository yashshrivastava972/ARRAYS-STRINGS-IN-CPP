// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: REVERSE OF A STRING (EXPERIMENT: 7I)


// CODE: 

int main() {
    string str;
    int length;

    // Input string...
    cout << "Enter a String: ";
    cin >> str; // reads without spaces...

    // Get length of string...
    length = str.length();

    // Print characters from last to first...
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }

    return 0;
}

// OUTPUT:

// Enter a String: YASH
// HSAY
