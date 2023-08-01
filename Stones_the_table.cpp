#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string colors;
    cin >> colors;

    int minRemovals = 0;
    for (int i = 1; i < n; i++) {
        if (colors[i] == colors[i - 1]) {
            minRemovals++;
        }
    }

    cout << minRemovals << endl;

    return 0;
}
