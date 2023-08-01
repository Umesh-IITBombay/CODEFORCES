#include <iostream>
#include <string>

std::string abbreviateWord(const std::string& wor) {
    if (wor.length() <= 10) {
        return wor;
    } else {
        return wor[0] + std::to_string(wor.length() - 2) + wor[wor.length() - 1];
    }
}

int main() {
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::string wor;
        std::cin >> wor;
        std::cout << abbreviateWord(wor) << std::endl;
    }

    return 0;
}
