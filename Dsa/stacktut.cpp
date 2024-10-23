// #include <bits/stdc++.h>
// using namespace std;
// class stk{
//     int arr[100];
//     int count = 0 ;

//     public:
//     void push(int x){
//         if(count >= 100) {
//             cout << "stack is full" << endl;
//             return;
//         }
//         arr[count] = x;
//         count++;
//     }
//     int pop(){
//         if(isempty()) {
//             return -1;
//         }
//         else {
//             count--;
//             arr[count] = 0;
//         }
//     }

//     bool isfull(){
//         if(count == 99){
//             return true;
//         }
//         return false;
//     }

//     void display(){
//         for(int i = count -1 ; i >=0 ;i--){
//             if(i == count-1) cout << arr[i] << " <--top"<< endl;
//             else cout << arr[i] << endl;
//         }
//     }

//     bool isempty(){
//         if(count ==0) return true;
//         return false;
//     }

// };

// void reverse(string s){
//     stack<char> st;
//     for(int i = 0 ; i < s.size() ;i++){
//         st.push(s[i]);
//     }
//     string ans;
//     while(!st.empty()){
//         ans += st.top();
//         st.pop();
//     }
//     cout << ans << endl;
// }

// int priority(char ch){
//     if(ch == '(') return 0;
//     else if(ch == '+' || ch == '-') return 1;
//     else if(ch == '*' || ch == '/') return 2;
//     else if(ch == '^' ) return 3;
//     return -1;
// }

// string intopost(string s){
//     string ans = "";
//     stack<char> st;
//     for(int i = 0 ; i < s.size() ; i++){
//         // if((s[i] >='a' and s[i] <= 'z') || (s[i] >= 'A' and s[i] <= 'Z')){
//         if(isalnum(s[i])){
//             ans+= s[i];
//         }
//         else if(s[i] == ' ') continue;
//         else if(s[i] == '(') st.push(s[i]);
//         else if(s[i] == ')') {
//             while(!st.empty() and st.top() != '('){
//                 ans += st.top();
//                 st.pop();
//             }
//             st.pop();
//         }
//         else{
//             while(!st.empty() and priority(s[i]) <= priority(st.top())){
//                 ans += st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }

//     }
//     while(!st.empty()) {
//         ans += st.top();
//         st.pop();
//     }
//     return ans ;
// }

// string rev(string str){
//     string ans = "";
//     for(int i = str.size()-1 ; i >=0 ; i--){
//         ans += str[i];
//     }
//     return ans;
// }
// //  infix to prefix
// // step 1 reverse the infix
// //  step 2 infix to postfix
// //  step 3 rever the postfix;

// string intopre(string str){
//     string ans = rev(str);
//     for (int i = 0; i < ans.size(); i++) {
//         if (ans[i] == '(') {
//             ans[i] = ')';
//         } else if (ans[i] == ')') {
//             ans[i] = '(';
//         }
//     }
//     ans = intopost(ans);
//     return rev(ans);
// }

// string posttoin(string s){
//     string ans = "";
//     stack<string> st;
//     for(int i = 0 ; i < s.size() ; i++){
//         if((s[i] >= 'a' and s[i] <= 'z') || (s[i] >= 'A' and s[i] <= 'Z')){
//             // operand spoted;
//             st.push(string(1, s[i]));

//         }
//         else{
//             string s1 = st.top();
//             st.pop();
//             string s2 = st.top();
//             st.pop();
//             st.push("(" + s2 + s[i] + s1 + ")");
//         }
//     }
//     return st.top();

// }

// int opp(char ch , int num1 , int num2){
//     if(ch == '+') return num1 + num2;
//     else if (ch == '-' ) return num1 - num2;
//     else if (ch == '*') return num1 * num2;
//     else if(ch == '/') return num1 / num2;
//     else return 0;
// }

// int evalpostfix(string s){
//     stack<char> stk;
//     for(int i = 0 ; i < s.size() ; i++){
//         if(isalnum(s[i])){
//             stk.push((s[i]));
//         }
//         else{
//             int num1 = stk.top()-'0';
//             stk.pop();
//             int num2 = stk.top()-'0';
//             stk.pop();
//             // cout << num1 << " : "<< num2 << " opper " << s[i] << " ans : " << opp(s[i] , num1 , num2) <<  endl; 
//             stk.push(opp(s[i] , num2 , num1) + '0');
//         }
//     }
//     return stk.top() - '0';
// }

// int main() {
//     cout << "hello world" << endl;
    
//     cout << intopost("c-d*f^e^d/c*b+a") << endl;
//     // cout << evalpostfix(intopost("-2+ 1")) << endl;
//     // cout << intopre("a+b*(c^d-e)") << endl;
//     // cout << posttoin("abcd^e-*+");

//     return 0;
// }



// class Stack{
//     int* arr;
//     int size;
//     int temp = -1;
//     public :
//     Stack(int s){
//         size = s;
//         arr= new int[size];
//     }
//     ~Stack(){
//         delete arr;
//     }

//     void push(int x){
//         if(temp < size-1){
//             temp++;
//             arr[temp] = x;
//             cout << "successfully push :" << x << "trmp:" <<temp <<endl;
            
//         }
//         else {
//             cout << "stack overflow \n";
//         }
//     }
//     int top(){
//         if(temp >= 0 ){
//             return arr[temp];
//         }
//         return -1; 
//     }

//     void pop(){
//         if(temp >= 0) {
//             temp--;
//             return;
//         }
//         cout << "stack is empty \n" ;
//     }
//     bool empty(){
//         return temp == -1;
//     }
    

// };

#include <bits/stdc++.h>
using namespace std;
int priority(char ch){
    if(ch == '(') return 0;
    else if(ch == '%') return 4;
    else if(ch == '+' || ch == '-') return 2;
    else if(ch == '*' || ch == '/') return 3;
    else if(ch == '&') return 1;
    // else if(ch == '^' ) return 3;
    return -1;
}

string infixToPostfix(string s) {
    stack<char> stk;
    string ans = "";
    for (int i = 0; i < s.size(); i++) {
        if (isalnum(s[i])) {
            ans += s[i];
        }
        else if (s[i] == '(') {
            stk.push(s[i]);
        }
        else if (s[i] == ')') {
            while (!stk.empty() && stk.top() != '(') {
                ans += stk.top();
                stk.pop();
            }
            stk.pop();  // Remove '('
        }
        else {  // Operator
            while (!stk.empty() && priority(stk.top()) >= priority(s[i])) {
                ans += stk.top();
                stk.pop();
            }
            stk.push(s[i]);
        }
    }
    while (!stk.empty()) {
        ans += stk.top();
        stk.pop();
    }
    return ans;
}
string posttoinfix(string s) {
    stack<string> stk;
    string ans = "";

    for (int i = 0; i < s.size(); i++) {
        if (isalnum(s[i])) {  // Check if it's an operand (alphanumeric)
            // Convert char to string and push it
            stk.push(string(1, s[i]));
        }
        else {
            // It's an operator, pop two operands
            string ele2 = stk.top();
            stk.pop();
            string ele1 = stk.top();
            stk.pop();
            // Push the new expression with parentheses
            stk.push("(" + ele1 + s[i] + ele2 + ")");
        }   
    }
    return stk.top();
}
string pretoinfix(string s) {
    stack<string> stk;
    string ans = "";

    for (int i = s.size()-1; i >=0; i--) {
        if (isalnum(s[i])) {  // Check if it's an operand (alphanumeric)
            // Convert char to string and push it
            stk.push(string(1, s[i]));
        }
        else {
            // It's an operator, pop two operands
            string ele2 = stk.top();
            stk.pop();
            string ele1 = stk.top();
            stk.pop();
            // Push the new expression with parentheses
            stk.push("(" + ele2 + s[i] + ele1 + ")");
        }   
    }
    return stk.top();
}

string reverse(string& temp){
    string ans = "";
    for(int i = temp.size()-1 ; i>= 0 ; i--){
        ans += temp[i];
    }
    return ans;
}

string infitopre(string temp){
    //reverse the string 
   temp =  reverse(temp);

    // fix brackets
    for(int i = 0 ; i < temp.size() ; i ++){
        if(temp[i] == '(') temp[i] = ')';
        else if(temp[i] == ')') temp[i] = '(';
    }


    string ans = infixToPostfix(temp);

    return reverse(ans);

}





int main() {
    cout << "original string a + b \n";
    string temp = infixToPostfix("A*(B&D/E)-F*(G%H/K)");
    string ans = posttoinfix(temp);
    cout << temp << endl;
    cout << ans;
    // string ans = infitopre("a+b");
    // cout << ans << endl;
    // string ans2 = pretoinfix(ans);
    // cout << ans2;

    return 0;

}


// #include <bits/stdc++.h>
// using namespace std;

// class Node{
//     public :
//     int val;
//     Node* next;

//     Node() : next(nullptr) {}
//     Node(int x) : next(nullptr) {val = x;}

// };

// class stk{
    
//     Node* head;
//     Node* tail;
//     public :
//     stk() {
//         head = nullptr;
//         tail = nullptr;
//     }

//     void push(int x){
//         if(head == nullptr){
//             head = new Node(x);
//             tail = head;
//             // cout << "head was null" << endl;
//         }
//         else{
//             tail->next = new Node(x);
//             tail = tail->next;
//             // cout << "head was not null" << endl;
//         }
//     }
//     int top(){
//         return tail->val;
//     }
//     void pop(){
//         Node* temp = head; 
//         while(temp->next != tail){
//             temp  = temp->next;
//         }
//         tail = temp;
//         return;
//     }

// };

// int main() {
//     cout << "hello world" << endl;
//     stk pp;
//     pp.push(5);
//     pp.push(4);
//     pp.push(3);
//     pp.push(2);
//     pp.push(1);
//     cout<<  pp.top() << endl; // 1
//     pp.pop();
//     cout<<  pp.top() << endl; //2
//     pp.pop();
//     cout<<  pp.top() << endl; // 3 
//     pp.pop();
//     cout<<  pp.top() << endl; // 4 
//     pp.pop();
//     return 0;
// }