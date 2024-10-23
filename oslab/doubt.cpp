// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter no.of processes : ";
    cin >> n;
    
    int tq;
    cout << "Enter time quanta : ";
    cin >> tq;
    
    int arr[n][5];
    int max = 0;
    
    for(int i=0;i<n;i++){
        arr[i][0] = 0;
    }
    cout << n;
    cout << "Enter burst times of processes : ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i][1];
        if(arr[i][1]>=arr[max][1])
        {
            max = i;
        } 
    }
    cout << "loop se bahar aa gya";
    
    int t = 0;
    while(arr[max][1]!=0){
        for(int i=0;i<n;i++){
            if(arr[i][1]==0) continue;
            
        if(arr[i][1]<=tq){
            t += arr[i][1];
            arr[i][1] == 0;
            arr[i][2] = t;
        }
        
        else{
            arr[i][1] -= tq;
            t += tq;
        }
    }
    }
    cout << "this checkpoint";
    
    for(int i=0;i<n;i++){
        arr[i][3] = arr[i][2]-arr[i][0];
        arr[i][4] = arr[i][3]-arr[i][2];
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}