#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> tasks(m);
    for (int i = 0; i < m; i++) {
        cin >> tasks[i];
    }

    long long totalTime = 0;
    int currentHouse = 1;

    for (int i = 0; i < m; i++) {
        if (tasks[i] >= currentHouse) {
            totalTime += tasks[i] - currentHouse;
        } else {
            totalTime += n - currentHouse + tasks[i];
        }
        currentHouse = tasks[i];
    }

    cout << totalTime << endl;

    return 0;
}
