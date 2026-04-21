#include <iostream>
using namespace std;

double Area(double side) {
    return side * side;
}

double Perimeter(double side) {
    return 4 * side;
}

int main() {
    double side;

    cout << "Enter the side length of the square: ";
    cin >> side;

    cout << "Area: " << Area(side) << endl;
    cout << "Perimeter: " << Perimeter(side) << endl;

    return 0;
}