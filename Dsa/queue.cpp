#include <bits/stdc++.h>
using namespace std;

queue<int>  interleave(queue<int> q){
    queue<int> fh;
    queue<int> sh;
    queue<int> ans;
    int n = q.size();
    for(int i = 0 ; i < n ; i++){
        if(i <1 +(q.size()/2)){
            fh.push(q.front());

            q.pop();

        } 
        else{

            sh.push(q.front());
            q.pop();
        }
    }

    for(int i = 0 ; i < n ; i++){
        if(i%2 == 0){
            ans.push(fh.front());
            fh.pop();

        } 
        else {
            ans.push(sh.front());
            sh.pop();
        }
    }
    return ans;

}

string ques4(string str){
    unordered_map<char , int> map;
    queue<int> qq;
    string ans = "";
    for(int i = 0 ; i < str.size() ; i++ ){
        map[str[i]]++;
        qq.push(str[i]);
        while(!qq.empty() and map[qq.front()] != 1){
            qq.pop();
        }
        if(qq.empty()){
           ans += "-1"; 
        }
        else{
            ans += qq.front();
        }
    }
    return ans;
}

int main() {

    // queue<int> q;
    // q.push(4);
    // q.push(7);
    // q.push(11);
    // q.push(20);
    // q.push(5);
    // q.push(9);

    // queue<int> temp = interleave(q);
    // while(!temp.empty()){
    //     cout << temp.front() << "-->";
    //     temp.pop();
    // }

    string ques = "aabcdbef";
    cout << ques4(ques) << endl;

    return 0;
}