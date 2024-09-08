#include <iostream>
using namespace std;

int main()
{
    int N = 6;
    bool isPrime = true;

    for (int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    cout << (isPrime == 1 ? "It is prime" : "It is not prime") << endl;

    return 0;
}