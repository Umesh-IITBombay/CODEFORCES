#include <iostream>
#include <cmath>

bool canBuildFence(int a) {
    // Handle special case for a = 0 (not a polygon)
    if (a == 0) {
        return false;
    }
    
    // Check all possible number of sides for the regular polygon (2 to 180)
    for (int n = 3; n <= 180; ++n) {
        int interiorAngle = (180 * (n - 2)) / n;
        
        // Check if the interior angle matches the given angle 'a'
        if (interiorAngle == a) {
            return true;
        }
    }
    
    return false;
}

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int a;
        std::cin >> a;

        if (canBuildFence(a)) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}
