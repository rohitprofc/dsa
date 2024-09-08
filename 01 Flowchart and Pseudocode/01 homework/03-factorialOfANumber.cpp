#include <iostream>
using namespace std;

int main()
{
    int factorial = 1, N = 5;

    for (int i = 1; i <= N; i++)
    {
        factorial = factorial * i;
    }

    cout << N << " Factorial is: " << factorial << endl;
    return 0;
}