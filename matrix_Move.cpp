#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int matrix[5][5];
    int rowPos, colPos;

    // Input the matrix
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                rowPos = i;
                colPos = j;
            }
        }
    }

    // Calculate the minimum number of moves
    int moves = abs(rowPos - 2) + abs(colPos - 2);

    cout << moves << endl;

    return 0;
}
