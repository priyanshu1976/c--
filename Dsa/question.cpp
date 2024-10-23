#include <bits/stdc++.h>
using namespace std;

bool count(int n){
    for(int i = 1 ; i<= n ; i++){
        if(i*i == n) return true;
        else if(i*i > n) return false;
    }
    return false;
}

int main() {
    cout << "hello world" << endl;
     // n 
     // table pe n coins 1 --> n 
     // all tail 
     // 1 ,2 ,3 ,4 ,5 ,6,7 ,8 ,9 ,`10 
     // 1 ,2 ,3 ,4  t ,t ,t ,t  t --> h --> t --> h 
    //  1 , 2 , 4 == odd  flip 
    //  1 , 2 == even 
    // 5 = 1 ,5 
    // 6 = 1 ,2 , 3 ,6
    // 9 = 1 ,3 ,9 
    // 
    int n;
    cout << "enter the number ";
    cin >> n;
    vector <char> arr;
    for(int i = 1 ; i <=n ; i++){
        if(count(i)){
            // num is perfect square
            arr.push_back('h');
        }
        else{
            arr.push_back('t');
        }
    }

    for(int i = 0 ; i < arr.size() ; i ++){
        cout << arr[i] << " "<< endl;
    }
    

    
    // n * root n


     


    return 0;
}