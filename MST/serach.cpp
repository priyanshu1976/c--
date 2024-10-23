#include <bits/stdc++.h> 
using namespace std;

vector<int> bubblesort(vector<int> &arr){
    bool flag = true;
    for(int i = 0 ; i < arr.size() ; i++){
        flag = true;
        for(int j = 0 ; j < arr.size()-1 ; j++){
            if(arr[j] > arr[j+1]){
                // swapping condition
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
                
            }
        }
        if(flag) break;
    }
    return arr;
}
vector<int> selectionsort(vector<int> &arr){
    for(int i = 0 ; i < arr.size() ; i++){
        int temp = 0;
        for(int j = 0 ; j < arr.size()-i ; j++){
            if(arr[j] > arr[temp]){
                temp = j;
            }
        }
        // swap with size - 1 - i element 
        int con = arr[arr.size() - 1 - i];
        arr[arr.size() - 1 - i] = arr[temp];
        arr[temp] = con; 
    }
    return arr;
}

int main(){
    // basic sa code for linear search
    vector<int> arr = {1,7,3,4,6,2,7,2};
    // int target = 2 ;
    // for(int i = 0 ; i  < arr.size() ; i++){
    //     if(target == arr[i]){
    //         cout << "mil gya"<< endl;
    //         break;
    //     }
        
    // }

    // Binary search 
    // sorted arr 
    // vector<int> arr = {1,3,5,7,9,11,13,15};
    // int target = 11;
    // int s = 0  ;
    // int e = arr.size() -1 ;

    // while(s < e){
    //   int m = s + (e-s)/2;
    //   if(arr[m] == target){
    //       cout << "mil gya binary search mei " << endl;
    //       break;
    //   }
    //   else if(arr[m] > target){
    //       e = m-1;
    //   }
    //   else s = m;
    // }

    arr = selectionsort(arr);
    for(int i = 0 ; i < arr.size() ; i++){
        cout << arr[i] << " " ;
    }
    return 0;
}