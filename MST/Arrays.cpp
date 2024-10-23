#include <iostream>
using namespace std;


// code for bs 
int bs(int target , int arr[], int len){
    int s = 0  , e = len;
    while(s <= e){ // less than equal to 
        int m = s + (e-s)/2;
        if(arr[m] == target) return m;
        else if(arr[m] > target) e = m-1;
        else s = m+1;
        // cout << "heelo";
    }
    return -1;
}

int main(){
    int arr[] = {1,4,6,8,9,13,15};
    int len = sizeof(arr) / sizeof(arr[0]);
    cout << bs(6 , arr , len) << endl;
    return 0;
}