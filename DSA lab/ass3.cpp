#include <iostream>
using namespace std;

int main(){
    int arr[5][5] = {{1,2,3,4,5} ,{6,7,8,9,0} ,{11,0,13,0,15},{0,0,0,19,0} ,{0,22,0,24,0}};
    int size = 0;
    for(int i = 0 ; i < 5 ; i++){
        for(int j =0 ; j <  5 ; j++){
            if(arr[i][j] != 0){
                size++;
            }
        }
    }

    // display the matrix
    for(int i = 0 ; i < 5 ; i++){
        for(int j =0 ; j <  5 ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }



    int tri[size][3];
    int index = 0;

     for(int i = 0 ; i < 5 ; i++){
        for(int j =0 ; j <  5 ; j++){
            if(arr[i][j] != 0){
                tri[index][0] = i;
                tri[index][1] = j;
                tri[index][2] = arr[i][j];
                index++;
            }
        }
    }

    for(int i = 0 ; i < size ; i ++){
        for(int j = 0 ; j < 3 ; j++){
            cout << tri[i][j];
        }
        cout << endl;
    }

    return 0;
}