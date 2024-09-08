#include <iostream>
using namespace std;

int main()
{
    int N = 20, sum = 0;

    for (int i = 0; i <= N; i++)
    {
        sum += i;
    }
    cout << "Sum of first " << N << " natural numbers: " << sum << endl;

    return 0;
}