#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        int maxDivisors = 0;
        int count = 0;
        for (long long int i = 1; i*i*i*i*i<= n; i++) {
            if (n % i == 0) {
                count++;
                if (n / i != i) {
                    count++;
                }
            } else {
                maxDivisors = max(maxDivisors, count);
                count = 0;
            }
        }
        
        maxDivisors = max(maxDivisors, count); // Check for divisors larger than sqrt(n)
        
        if(n==1){
            cout << 1 << endl;
        }
        else{
            cout << maxDivisors/2 << endl;
        }
        
    }
    return 0;
}
