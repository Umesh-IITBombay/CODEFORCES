#include <iostream>
#include <string>
using namespace std;

int main() {
    string x;
    cin >> x;

    for (int i = 0; i < x.size(); i++) {
        int digit = x[i] - '0';
        if (i == 0) {
            if (digit == 9) {
                continue; // Skip if the first digit is 9, as it should not be inverted to 0.
            }
            // Invert the digit if it's greater than 4.
            x[i] = min(digit, 9 - digit) + '0';
        } else {
            // Invert the digit if it's greater than 4.
            x[i] = min(digit, 9 - digit) + '0';
        }
    }

    cout << x << endl;
    return 0;
}
