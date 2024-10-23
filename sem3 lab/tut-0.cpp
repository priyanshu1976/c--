#include <iostream>
using namespace std;

int main() {
    char ch = 'Y';
    int x;
    int size = 0; // Initialize size of the array to 0
    int arr[100]; // Initialize a fixed size array for demonstration

    while(ch == 'Y' || ch == 'y') {
        cout << "-----MENU------ \n 1.Create \n 2.Display \n 3. Insert \n 4. Delete \n 5. Linear Search \n 6. Exit" << endl;
        cout << "Press a number to perform an operation: ";
        cin >> x;

        switch (x) {
            case 1:
                cout << "Enter the size of the array: ";
                cin >> size;
                cout << "Enter " << size << " elements:" << endl;
                for (int i = 0; i < size; i++) {
                    cin >> arr[i];
                }
                break;
            case 2:
                if (size == 0) {
                    cout << "Array is empty!" << endl;
                } else {
                    for(int i = 0; i < size; i++) {
                        cout << arr[i] << endl;
                    }
                }
                break;
            case 3:
                if (size < 100) { // Ensure we don't exceed the array size
                    int index, element;
                    cout << "Enter the element you want to insert: ";
                    cin >> element;
                    cout << "Enter the index: ";
                    cin >> index;

                    if (index >= 0 && index <= size) {
                        for (int i = size; i > index; i--) {
                            arr[i] = arr[i-1];
                        }
                        arr[index] = element;
                        size++;
                    } else {
                        cout << "Invalid index!" << endl;
                    }
                } else {
                    cout << "Array is full!" << endl;
                }
                break;
            case 4:
                if (size > 0) {
                    int index;
                    cout << "Enter the index of the element you want to delete: ";
                    cin >> index;

                    if (index >= 0 && index < size) {
                        for (int i = index; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--;
                    } else {
                        cout << "Invalid index!" << endl;
                    }
                } else {
                    cout << "Array is empty!" << endl;
                }
                break;
            case 5:
                if (size > 0) {
                    int element;
                    cout << "Enter the element to search for: ";
                    cin >> element;
                    bool found = false;

                    for (int i = 0; i < size; i++) {
                        if (arr[i] == element) {
                            cout << "Element found at index: " << i << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Element not found!" << endl;
                    }
                } else {
                    cout << "Array is empty!" << endl;
                }
                break;
            case 6:
                ch = 'N';
                break;
            default:
                cout << "Invalid option!" << endl;
                break;
        }

        if (ch != 'N') {
            cout << "Do you want to continue? (Y/N): ";
            cin >> ch;
        }
    }

    return 0;
}
