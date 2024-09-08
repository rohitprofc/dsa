#include <iostream>
using namespace std;

int main() {
    int intVar = 5;
    double doubleVar = 3.5;
    char charVar = 'B';

    // Implicit Type Conversion
    double result = intVar + doubleVar; // intVar is implicitly converted to double
    cout << "Implicit Conversion Result: " << result << endl;

    // Explicit Type Casting
    int castResult = int(charVar); // charVar is explicitly converted to int
    cout << "Explicit Casting Result: " << castResult << endl;

    return 0;
}
