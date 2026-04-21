#include <iostream>
using namespace std;

int main() {
    int values[5];
    double sum = 0;
    double average;

    for (int i = 0; i < 5; i++) {
        cout << "Enter value " << i + 1 << " to populate the array: ";
        cin >> values[i];
        sum = sum + values[i];
    }

    average = sum / 5;
    cout << "The average of the values is: " << average << endl;

    return 0;
}