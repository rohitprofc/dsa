#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    for (int i = 1; i <= n; i++)
    {
        char ch = 64;
        for (int j = 1; j <= i; j++)
        {
            cout << (char)(ch + i) << " ";
            ch--;
        }
        cout << endl;
    }

    return 0;
}