#include <iostream>
using namespace std;

bool canfibonacci(int p, int q, int k) {
    if (p < 0 || q < 0) return false; // Check if both p and q are non-negative
    if (k == 0) return true;
    return canfibonacci(q - p, p, k - 1);
}

int solution(int n, int k) {
    // The number of Fibonacci-like sequences of length k is the number of ways
    // we can construct such sequences by iterating over the first element (p)
    // and the second element (q) of the sequence.

    int ans = 0;
    int first = n/2; // Start iterating from n/2 to n since f_1 and f_2 can be arbitrary. 
    for (int i = first; i >= 0; i--) { // Changed the loop condition to iterate in reverse.
        int second = n - i;
        bool fabo = canfibonacci(i, second, k - 2); // Check if the remaining k-2 elements form a Fibonacci-like sequence.
        if (fabo) {
            ans++;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << solution(n, k) << endl;
    }
    return 0;
}
