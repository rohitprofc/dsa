#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 0;

    cout << "Enter a and b: ";
    cin >> a >> b;

    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;
    cout << "Remainder: " << (a % b) << endl;
    
    return 0;
}