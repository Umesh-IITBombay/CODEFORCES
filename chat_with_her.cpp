#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
    string username;
    cin >> username;

    unordered_set<char> distinctChars;

    // Count the number of distinct characters
    for (char ch : username) {
        distinctChars.insert(ch);
    }

    // Determine the gender based on the number of distinct characters
    string gender = (distinctChars.size() % 2 == 0) ? "CHAT WITH HER!" : "IGNORE HIM!";

    cout << gender << endl;

    return 0;
}
