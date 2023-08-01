#include <iostream>
#include <vector>
#include <algorithm>

struct Dragon {
    int strength;
    int bonus;
};

bool compareDragons(const Dragon& a, const Dragon& b) {
    return a.strength < b.strength;
}

int main() {
    int s, n;
    std::cin >> s >> n;

    std::vector<Dragon> dragons(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> dragons[i].strength >> dragons[i].bonus;
    }

    // Sort dragons based on their strength in ascending order
    std::sort(dragons.begin(), dragons.end(), compareDragons);

    // Kirito's current strength
    int currentStrength = s;

    for (int i = 0; i < n; ++i) {
        // If Kirito's strength is not greater than the current dragon's strength, he loses the duel
        if (currentStrength <= dragons[i].strength) {
            std::cout << "NO\n";
            return 0;
        }

        // Kirito defeats the dragon and increases his strength by the bonus
        currentStrength += dragons[i].bonus;
    }

    std::cout << "YES\n";
    return 0;
}
