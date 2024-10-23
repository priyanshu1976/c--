#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vecotr<int>> sp1){
    vector<vector<int>> sp;
    for(int i = 0 ; i < sp1.size() ; i++){
        for(int j = 0 ; j < sp1[0].size() ; j++){
            if(sp1[i][j] != 0){
                vector<int> push = {i ,j, sp1[i][j]};
                sp.push_back(push);
            }  
        }
    }
    // now swap the i and j postion 
    
}

int main() {
    cout << "enter sparse matrix" << endl;
    vector<vector<int>> sp1 = {{1,0,3},{4,0,6},{7,0,9}};

    for(int i = 0 ; i < sp1.size() ; i++){
        for(int j = 0 ; j < sp1[0].size() ; j++){
            cout << sp1[i][j] << " ";
        }
        cout << endl;
    }
    vector<vector<int>> sp;
    for(int i = 0 ; i < sp1.size() ; i++){
        for(int j = 0 ; j < sp1[0].size() ; j++){
            if(sp1[i][j] != 0){
                vector<int> push = {i ,j, sp1[i][j]};
                sp.push_back(push);
            }  
        }
    }
    cout << endl;
    cout << "Sparse matrix representation:" << endl;

    for(int i = 0 ; i < sp.size() ; i++){
        for(int j = 0 ; j < sp[0].size() ; j++){
            cout << sp[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}