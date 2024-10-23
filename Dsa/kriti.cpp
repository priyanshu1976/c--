#include <bits/stdc++.h>
using namespace std;

class stk{
    vector<int> arr;

    public :
    void push(int x){
        arr.push_back(x);
    }
    void pop(){

       vector<int> temp(arr.size()-1);
       for(int i = 0 ; i < arr.size()-1 ; i++) {
        // cout << "pop running" << endl;
        temp[i] = arr[i];
       }
       arr = temp;
    }

    int top(){
        return arr[arr.size()-1];
    }

    bool isempty(){
        if(arr.size() == 0) return true;
        return false;
    }

    void display(){
        for(int i = arr.size()-1 ; i >= 0  ; i--){
            if( i ==arr.size()-1){
                cout << arr[i] << "<-- top" << endl;
            }
            else {
                cout << arr[i] << endl;
            }
        }
    }
};

int main() {
    cout << "hello world" << endl;
    stk pp;
    pp.push(5);
    pp.push(4);
    pp.push(3);
    pp.push(2);
    pp.push(1);
    pp.display();
    pp.pop();
    cout << "after pop" << endl;
    pp.display();
    return 0;
}