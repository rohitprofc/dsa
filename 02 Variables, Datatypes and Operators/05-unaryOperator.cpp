#include <iostream>
using namespace std;

int main() {
    int x = 5;

    cout << "Original value: " << x << endl;
    cout << "Post-Increment: " << x++ << endl; // x is printed, then incremented
    cout << "After Post-Increment: " << x << endl;
    cout << "Pre-Increment: " << ++x << endl;  // x is incremented, then printed
    cout << "After Pre-Increment: " << x << endl;

    return 0;
}
