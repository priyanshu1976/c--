#include <iostream>
using namespace std;

class player {
public:
    string name;
    float avg;
    int run;

    // Constructor to initialize player object
    player(string name, float avg, int run) : name(name), avg(avg), run(run) {}

    // Function to sort players based on 'run' in descending order
    void sortdesc(player arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            // Last i elements are already sorted
            for (int j = 0; j < n - i - 1; j++) {
                // Swap if the element found is smaller than the next element (for descending order)
                if (arr[j].run < arr[j + 1].run) {
                    player temp = arr[j];  // Swap the entire player object
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
};

int main() {
    // Create an array of 10 player objects and initialize them
    player game[10] = {
        {"Player1", 50.5, 1000},
        {"Player2", 40.3, 900},
        {"Player3", 35.7, 800},
        {"Player4", 60.2, 1200},
        {"Player5", 48.9, 950},
        {"Player6", 54.1, 1100},
        {"Player7", 38.6, 700},
        {"Player8", 47.5, 920},
        {"Player9", 52.8, 1050},
        {"Player10", 44.7, 870}
    };

    int n = 10;  // Size of the player array

    // Displaying the details of all players before sorting
    cout << "Before Sorting:\n";
    for (int i = 0; i < n; i++) {
        cout << "Name: " << game[i].name << ", Average: " << game[i].avg << ", Runs: " << game[i].run << endl;
    }

    // Sort players based on 'run' in descending order
    game[0].sortdesc(game, n);

    // Displaying the details of all players after sorting
    cout << "\nAfter Sorting (by runs in descending order):\n";
    for (int i = 0; i < n; i++) {
        cout << "Name: " << game[i].name << ", Average: " << game[i].avg << ", Runs: " << game[i].run << endl;
    }

    return 0;
}
