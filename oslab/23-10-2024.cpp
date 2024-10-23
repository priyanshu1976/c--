#include <bits/stdc++.h>
using namespace std;



int main() {
    int n; // number of process
    int r; // recource type 
    cout << "Enter the number of processes: ";
    cin >> n;
    cout << "Enter the number of resource types: ";
    cin >> r;
    int max[n][r];
    int allc[n][r];
    int ava[r];
    cout << "enter the max resoureces" << endl;
    for(int i = 0 ; i < n ; i++){
        cout << "enter the max recources for " << i+1 << " process";
        for(int j = 0 ; j < r ; j++){
            cin >> max[i][j];
        }
    }
    cout << "enter the allocated resoureces" << endl;
    for(int i = 0 ; i < n ; i++){
        cout << "enter the allocated recources for " << i+1 << " process";
        for(int j = 0 ; j < r ; j++){
            cin >> allc[i][j];
        }
    }

    cout << "enter the avalible resoureces" << endl;
    int count = 0;
    for(int i = 0 ; i < r ; i++){
        cin >> ava[i];
    }
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        for(int k = 0 ; k < n ; k++){
        bool temp = true;
            for(int j = 0 ; j < r ; j++){
                if(allc[k][j] == -1){
                    temp = false;
                    break;
                } 
                else if(allc[k][j]+ava[j] < max[k][j]){
                    // this process cant be executed
                    temp = false;
                    break;
                }
            }
            if(temp){
                count++;
                ans += k;
                ans *= 10;
                cout << "Available resources before process " << k << " execution: ";
                for (int j = 0; j < r; j++) {
                    cout << ava[j] << " ";
                }
                cout << endl;
                for(int j = 0 ; j < r;j++){
                    ava[j] += allc[k][j];
                    allc[k][j] = -1;
                }
                cout << "Allocation matrix after process " << k << " execution:" << endl;
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < r; j++) {
                        cout << allc[i][j] << " ";
                    }
                    cout << endl;
                }
                cout << endl;
                cout << "Available resources after process " << k << " execution: ";
                for (int j = 0; j < r; j++) {
                    cout << ava[j] << " ";
                }
                cout << endl;
                break;b
            }
        }
    }
    cout << ans/10 << endl;
    count == n ?  cout << "safe" : cout << "unsafe";
    return 0;
}