#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int totalHours = a; // Initially, Vasily can light up the room for "a" hours with "a" candles.

    while (a >= b) {
        int newCandles = a / b; // Calculate the number of new candles made from "b" went out candles.
        totalHours += newCandles; // Add the new candles to the total hours.
        a = newCandles + a % b; // Update the remaining candles after conversion.
    }

    cout << totalHours << endl;

    return 0;
}
