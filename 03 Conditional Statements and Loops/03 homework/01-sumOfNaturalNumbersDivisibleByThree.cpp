#include <iostream>
using namespace std;

int main()
{
    int i = 0, sum = 0, N = 10;
    while (i <= N)
    {
        if (i % 3 == 0)
        {
            sum = sum + i;
        }
        i++;
    }
    cout << "Sum of first " << N << " natural numbers divisible by 3: " << sum << endl;
    return 0;
}