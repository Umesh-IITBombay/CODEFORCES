#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string word;
    cin >> word;

    int uppercaseCount = 0;
    int lowercaseCount = 0;

    for (char c : word) {
        if (isupper(c))
            uppercaseCount++;
        else
            lowercaseCount++;
    }

    if (uppercaseCount > lowercaseCount) {
        for (char& c : word) {
            c = toupper(c);
        }
    } else {
        for (char& c : word) {
            c = tolower(c);
        }
    }

    cout << word << endl;

    return 0;
}
