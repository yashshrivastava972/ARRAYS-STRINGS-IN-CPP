// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: ARRAY SEARCH - NUMBER THAT NEEDS TO BE SEARCHED (EXPERIMENT: 7B).


// CODE: 

#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int key, i;

    cout << "ENTER 5 NUMBERS: ";
    for (i = 0; i < 5; i++) {
        cin >> marks[i];
    }

    cout << "ENTER THE NUMBER TO SEARCH: ";
    cin >> key;

    for (i = 0; i < 5; i++)
        if (key == marks[i]) {
            cout << "KEY FOUND AT LOCATION: " << i;
            break;
        }

    return 0;
}

// OUTPUT:

// ENTER 5 NUMBERS: 90
// 92
// 94
// 93
// 95
// ENTER THE NUMBER TO SEARCH: 95
// 				KEY FOUND AT LOCATION: 4
