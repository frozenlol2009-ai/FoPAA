#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float fx = 0;
    float x;
    double a,b;

    cout << "a "; cin >> a;
    cout << "b "; cin >> b;
    x = a + (b-a)/2;
    fx = (-3.5 * x * x * x) + (6.4 * x) - 2.4;
    cout << fx;
}
