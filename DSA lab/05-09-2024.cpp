#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
#include <queue>

int main(){
    // queue<int> pp;
    // // question 3
    // int size = 0;
    // cout << "enter the size of the queue" << endl;
    // cin >> size;

    // for(int i = 0 ; i < size ; i++){
    //     int elem = 0;
    //     cout << "enter the " << i+ 1 << "element" << endl;
    //     cin >> elem ;
    //     pp.push(elem);
    // }
    // queue<int> ques1;
    // for(int i = 0 ; i < size/2 ; i++){
    //     ques1.push(pp.front());
    //     pp.pop();
    // }
    // bool con = true;

    // cout << "ans" << endl;
    // for(int i = 0 ; i < size ; i++){
    //     if(con){
    //         cout << ques1.front() << endl;
    //         ques1.pop();
    //     }
    //     else{
    //         cout << pp.front() << endl;
    //         pp.pop();
    //     }
    //     con = !con;
    // }
    
    // question 2 

    queue<int> pp;
    // question 4
    unordered_map<char, int> umap;
    string str ;
    cout << "enter the string:" << endl;
    cin >> str;

    for(int i = 0 ; i < str.length() ; i++){
        
    }

    

    

}


class sstack{

    private :
        queue<int> pp;
        queue<int> temp;

    public : 
        void push(int ele){
            pp.push(ele);
        }

        void pop(){
            cout << pp.back() << endl;

        }


};
