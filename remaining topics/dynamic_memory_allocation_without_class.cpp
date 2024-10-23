#include <iostream>
using namespace std;

int main() {
    // Dynamic memory allocation for a single integer
    int *p = new int;  // Allocates memory for one int
    *p = 5;
    cout << "Value of p: " << *p << endl;
    cout << &p << endl;
    // Dynamic memory allocation for an array
    int *arr = new int[5];  // Allocates memory for an array of 5 integers

    // Initializing and displaying the array
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    // Deallocating memory
    delete p;       // Deallocates memory for the single integer
    delete[] arr;   // Deallocates memory for the array

    return 0;
}

