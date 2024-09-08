#include <iostream>
using namespace std;

int main()
{
    char a;
    cout << "Enter a character: ";
    cin >> a;

    if (a >= 65 && a <= 90) // Implicit conversion happens here
    {
        cout << a << " is uppercase" << endl;
    }
    else
    {
        cout << a << " is lowercase" << endl;
    }
    return 0;
}