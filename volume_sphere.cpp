#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    double volume;
    double PI = 3.142;

    cout << "Enter the radius of the sphere: ";
    cin >> radius;

    volume = (4.0 / 3.0) * PI * pow(radius, 3);
    cout << "The volume of the sphere is: " << volume << endl;

    return 0;
}