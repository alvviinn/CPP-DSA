#include <iostream>
using namespace std;

void checkCharacterCase(char input) {
    if (input >= 'A' && input <= 'Z') {
        cout << "The character is Uppercase." << endl;
    }
    else {
        cout << "The character is Lowercase." << endl;
    }
}

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    checkCharacterCase(ch);
    return 0;
}