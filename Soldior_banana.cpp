#include <iostream>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    // Calculate the total cost of buying w bananas
    int totalCost = (k * w * (w + 1)) / 2;

    // Calculate the amount of dollars the soldier must borrow
    int borrowedAmount = max(0, totalCost - n);

    cout << borrowedAmount << endl;

    return 0;
}
