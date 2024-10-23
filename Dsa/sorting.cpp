// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int n) {
//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < n - 1 -i ; j++){
//             if(arr[j] < arr[j+1]){
//                 swap(arr[j] , arr[j+1]);
//             }
//         }
//     }
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// int main() {
//     int arr[] = {64, 34, 25, 12, 22, 11, 90};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     bubbleSort(arr, n);
//     cout << "Sorted array: ";
//     printArray(arr, n);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void selectionSort(int arr[], int n) {
//     for(int i = 0 ; i < n-1 ; i ++){
//         int index = i ;
//         for(int j = i+1 ; j < n ; j++){
//             if(arr[j]  < arr[index]){
//                 index = j;
//             }
//         }
//         swap(arr[i] , arr[index]);
//     }
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// int main() {
//     int arr[] = {64, 25, 12, 22, 11};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     selectionSort(arr, n);
//     cout << "Sorted array: ";
//     printArray(arr, n);
//     return 0;
// }


#include <iostream>
using namespace std;

// void insertionSort(int arr[], int n) {
//     for(int i = 1 ; i < n ; i++){
//         int key = arr[i];
//         int j = i-1;
//         while(j >=0 and arr[j] > key ){
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key;
//     }
// }

// void printArray(int arr[], int n) {
//     for (int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// int main() {
//     int arr[] = {12,12, 11, 13, 5, 6};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     insertionSort(arr, n);
//     cout << "Sorted array: ";
//     printArray(arr, n);
//     return 0;
// }
