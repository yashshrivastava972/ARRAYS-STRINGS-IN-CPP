// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: MAXIMUM & MINIMUM ELEMENTS IN AN ARRAY (EXPERIMENT: 7E)

// CODE: 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    // Finding max and min
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Maximum element = " << max << endl;
    cout << "Minimum element = " << min << endl;

    return 0;
}

// OUTPUT:

// Enter number of elements: 4
// Enter 4 elements:
// 100
// 200
// 300
// 400
// Maximum element = 400
// Minimum element = 100
