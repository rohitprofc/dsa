#include <iostream>
using namespace std;

int main()
{
    int SI, principle = 5000;
    float time = 365, rate = 0.09;
    SI = (principle * time * rate) / 100;
    cout << "Simple Interest = " << SI << endl;
    return 0;
}