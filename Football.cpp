#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> goals;
    string team;

    // Read the goals and count them for each team
    for (int i = 0; i < n; i++) {
        cin >> team;
        goals[team]++;
    }

    // Find the team with more goals
    string winner;
    int maxGoals = 0;

    for (auto it : goals) {
        if (it.second > maxGoals) {
            maxGoals = it.second;
            winner = it.first;
        }
    }

    // Output the name of the winning team
    cout << winner << endl;

    return 0;
}
