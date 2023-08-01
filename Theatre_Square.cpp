#include <iostream>

int main() {
    long long n, m, a;
    std::cin >> n >> m >> a;

    // Calculate the number of flagstones required in the x-direction
    long long x_flagstones = (n + a - 1) / a;

    // Calculate the number of flagstones required in the y-direction
    long long y_flagstones = (m + a - 1) / a;

    // Calculate the total number of flagstones needed
    long long total_flagstones = x_flagstones * y_flagstones;

    std::cout << total_flagstones << std::endl;

    return 0;
}
