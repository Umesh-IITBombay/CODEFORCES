#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch) {
    return (ch == 'A' || ch == 'O' || ch == 'Y' || ch == 'E' || ch == 'U' || ch == 'I' ||
            ch == 'a' || ch == 'o' || ch == 'y' || ch == 'e' || ch == 'u' || ch == 'i');
}

int main() {
    string input, result;
    cin >> input;

    for (char ch : input) {
        if (!isVowel(ch)) {
            result += '.';
            if (isupper(ch)) {
                result += tolower(ch);
            } else {
                result += ch;
            }
        }
    }

    cout << result << endl;

    return 0;
}
