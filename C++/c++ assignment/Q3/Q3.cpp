#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Enter three integers: ";
    cin >> x >> y >> z;

    // This program checks if three integers are equal
    if (x == y && y == z)
        cout << "Equal" << endl;
    else
        cout << "Not equal" << endl;

    return 0;
}
