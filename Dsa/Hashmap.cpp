#include <bits/stdc++.h>
using namespace std;

class Stackk{

    private :
     vector<int> arr;
    public : 
        void push (int n){
            arr.push_back(n);
        }
        int pop(){
            // int elem = arr.at(0);
            // for(int i = 1 ; i < arr.size() ; i++){
            //     arr[i-1] = arr[i];
            // }
            // return elem;
            int elem = arr[arr.size()-1];
            arr.pop_back();
            return elem;
        }

        void top(){
            cout << "top elem" << arr[arr.size()-1] << endl;
        }

        bool isempty(){
            return arr.empty();
        }

};
int main(){

    vector<int> arr = {2,3,5,4,3,2,3,4,1,2,3};
    unordered_map<int , int> hashmap;
    for(int i = 0 ; i < arr.size() ; i++){
        hashmap[arr[i]]++;
    }

    for(auto it : hashmap){
        cout << it.first << "-->"  << it.second << endl;
    }
    cout << "sab sahi chlrha" << endl;

    Stackk priyanshu;
    priyanshu.push(5);
    priyanshu.push(4);
    priyanshu.push(3);
    priyanshu.push(2);
    priyanshu.push(1);
    priyanshu.top();
    priyanshu.push(0);
    priyanshu.top();
    while(!priyanshu.isempty()){
        cout << priyanshu.pop() << endl;
    }
    return 0;
}

vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans (spells.size() , 0);
        for(int i = 0 ; i < potions.size() ; i++){
            for(int j = 0 ; j < spells.size() ; j++){
                long long temp = potions[i] * spells[j];
                if(temp >= success){
                    ans[j] = ans[j] + 1;
                } 
            }
        }
        return ans;
}

// int maxProfit(vector<int>& prices) {
//       vector<int> max;
//       vector<int> min;
//       int min = 0;
//       for(int i = 0 ; i < prices.size() ; i++){
//             if(min > min[i]) min = min[i];
//     }  
// }

bool isValid(string s) {
        stack<char> c;
        for(int i = 0 ; i < s.size() ; i++){
            if(c.empty()) c.push(s[i]);
            else if(s[i] == ')' && c.top() == '(') c.pop();
            else if(s[i] == '{' && c.top() == '}') c.pop();
            else if(s[i] == '[' && c.top() == ']') c.pop();
            else c.push(s[i]);
        }
        return c.empty();
    }

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size());
        unordered_map<int , int > map;
        for(int i = 0 ; i < nums2.size() ; i++){
            map[nums2[i]] = i;
        }
        for(int i = 0 ; i < nums1.size() ; i++){
            int index = map[nums1[i]];
            bool con = true;
            for(int j = index ; j < nums2.size() ; j++){
                if(nums1[i] < nums2[j]){
                    con = false;
                ans[i] = nums2[j];
                break;
                } 
            }
            if(con){
                ans[i] = -1;
            }
        }

        return ans;
    }


    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> st;
        vector<int> ans(temp.size());
        for(int i =0 ; i < temp.size() ; i++){
            if(st.empty()) st.push(temp[i]);
            else if(temp[i] >= st.top()){
                int con = 0;
                while(!st.empty() and st.top() < temp[i]){
                    st.pop();
                    con++;
                }
                ans[i] = con;
                st.push(temp[i]);
            }
            else{
                ans[i] =1;
            }

        }
        return ans;
        
    }