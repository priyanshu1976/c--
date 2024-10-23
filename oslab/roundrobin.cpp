#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> process;
    vector<int> pid;
    int n;

    cout << "Enter the number of processes: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int tpid, burst;
        cout << "Enter process ID (tpid): ";
        cin >> tpid;
        cout << "Enter burst time: ";
        cin >> burst;
        pid.push_back(tpid);
        process.push_back(burst);
    }

    unordered_map<int, int> mapped;
    for (int i = 0; i < n; i++) {
        mapped[pid[i]] = process[i];
    }

    cout << "\nProcess ID -> Burst Time Mapping:\n";
    for (auto temp : mapped) {
        cout << temp.first << " --> " << temp.second << endl;
    }

    // Sort the process IDs
    sort(pid.begin(), pid.end());

    cout << "\nSorted PIDs:\n";
    for (int i = 0; i < n; i++) {
        cout << pid[i] << endl;
    }

    cout << "\nBurst Times:\n";
    for (int i = 0; i < n; i++) {
        cout << process[i] << endl;
    }

    // Rearrange process burst times based on sorted PIDs
    for (int i = 0; i < n; i++) {
        process[i] = mapped[pid[i]];
    }

    int tq;
    cout << "Enter the time quantum: ";
    cin >> tq;

    int currenttime = 0;
    int index = 0;

    while (!process.empty()) {
        process[index] -= tq; // -1 
        currenttime += tq;

        if (process[index] <= 0) {
            cout << "Process with PID " << pid[index] 
                 << " removed at time: " << currenttime + process[index] << endl;
            currenttime += process[index];
            process.erase(process.begin() + index);
            pid.erase(pid.begin() + index);
            if (index >= process.size()) {
                index = 0;  
            }
        } else {
            index = (index + 1) % process.size();
        }
    }

    return 0;
}
