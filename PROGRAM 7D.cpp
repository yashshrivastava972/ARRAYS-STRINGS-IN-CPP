// NAME: YASH SHRIVASTAVA
// PRN: 24070123137
// BATCH: E&TC-B2
// TITLE: SUM AND AVERAGE OF ELEMENTS OF AN ARRAY (EXPERIMENT: 7D)


// CODE: 

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n], sum = 0;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i]; // Adding elements
    }

    float avg = (float)sum / n; // Use float for average

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg << endl;

    return 0;
}

// OUTPUT:

// Enter number of elements: 3
// Enter elements: 10
// 20
// 30
// Sum = 60
// Average = 20
