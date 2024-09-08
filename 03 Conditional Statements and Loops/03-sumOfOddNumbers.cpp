#include <iostream>
using namespace std;

int main()
{
    int N = 42, sum = 0;

    for (int i = 0; i <= N; i++)
    {
        if (!(i % 2 == 0))
        {
            sum += i;
        }
    }
    cout << "Sum of first " << N << " odd numbers: " << sum << endl;

    return 0;
}