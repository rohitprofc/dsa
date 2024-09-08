#include <iostream>
using namespace std;

int main()
{
    int i = 0, sum = 0, N = 10;
    while (i <= N)
    {
        sum = sum + i;
        i++;
    }
    cout << "Sum of first " << N << " natural numbers: " << sum << endl;
    return 0;
}