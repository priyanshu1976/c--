#include <bits/stdc++.h>
using namespace std;

void permutation(string p , string up){
    if(up.length()==0){
        cout<<p<<endl;
        return;
    }
  for(int i = 0 ; i <= p.size() ; i++){
    permutation(p.substr(0, i) + up[0] + p.substr(i) , up.substr(1));
  }
}

// amazon dice problem 
// how many way you can form 4 , 1111 ,22 ,31, 4 ,211

// void dice (int currentSum , ){
  
// }

int main(){
  permutation("" , "abc");
  return 0;
}
