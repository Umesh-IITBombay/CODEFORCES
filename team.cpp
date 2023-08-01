#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int problems_implemented = 0;

    for (int i = 0; i < n; i++) {
        int petya, vasya, tonya;
        std::cin >> petya >> vasya >> tonya;

        // Count the number of friends sure about the solution
        int friends_sure = petya + vasya + tonya;

        // If at least two friends are sure, implement the problem
        if (friends_sure >= 2) {
            problems_implemented++;
        }
    }

    std::cout << problems_implemented << std::endl;

    return 0;
}
