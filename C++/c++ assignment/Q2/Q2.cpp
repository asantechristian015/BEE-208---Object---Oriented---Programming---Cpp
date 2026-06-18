#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r;
    cout << "Enter radius: ";
    cin >> r;

    double area = M_PI * pow(r, 2);
    cout << "Area = " << area << endl;

    return 0;
}
