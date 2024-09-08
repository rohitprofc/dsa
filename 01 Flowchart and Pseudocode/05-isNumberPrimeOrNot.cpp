#include <iostream>
using namespace std;

int main()
{
    int i = 2, num = 13;
    while (i <= num - 1)
    {
        if (num % i == 0)
        {
            cout << num << " is NOT A PRIME number" << endl;
            break;
        }
        else
        {
            cout << num << " is a PRIME number" << endl;
            break;
        }
        i++;
    }
    return 0;
}