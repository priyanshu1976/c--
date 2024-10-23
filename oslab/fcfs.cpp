#include <bits/stdc++.h>
using namespace std;



int main() {
    int n;
    cout << "Enter number of processes: " << endl;
    cin >> n;

    pair<int, int> arr[n];
    
    for (int i = 0; i < n; i++) {
        int at = 0;
        cout << "Enter the arrival time: "; 
        cin >> at;

        int bt = 0;
        cout << "Enter the burst time: "; 
        cin >> bt;

        arr[i] = make_pair(at, bt); 
    }

    // sort the array in terms of burst time ;

     sort(arr, arr + n, [](pair<int, int> &a, pair<int, int> &b) {
        return a.first < b.first; 
    });
    cout << endl;
    cout << "Sorted processes based on burst time:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Process " << i+1 << " -> Arrival Time: " << arr[i].first << ", Burst Time: " << arr[i].second << endl;
    }
    int time = arr[0].first; // arrival time of first process
    vector<pair<int , int >> wt;


    for(int i = 0 ; i < n ; i ++){
        if(time < arr[i].first){
            time = arr[i].first;
        }else{
            wt.push_back(make_pair(i+1 , time - arr[i].first ));
            time += arr[i].second;
        }
    }
    cout << endl;
    cout << "completion time : " << time << endl;
    cout << endl;
    cout << "diplay of waiting time " << endl;
3
    for(int i = 0 ; i < wt.size() ; i++){
        cout << "wt for process " <<  i+1  << "--> " << wt[i].second << endl;
    }

    return 0;
}