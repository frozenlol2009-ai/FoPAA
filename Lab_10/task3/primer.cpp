#include <iostream>
using namespace std;

void P_and_A(double a, double b, double &P, double &A)
{
    P=(a+b)*2;
    A=a*b;
}

int main()
{
    double x=2.5; double y=2.0;
    double P;
    double A;

    P_and_A(x,y,P,A);

    cout << "Perimeter = " << P << endl;
    cout << "Area = " << A << endl;
    return 0;
}