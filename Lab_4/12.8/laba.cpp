#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double x,y;
    cout << "Введите х координату:" << "\n"; cin >> x;
    cout << "Введите y координату:" << "\n"; cin >> y;

    if ((x*x + y*y >= 1 &&  x*x + y*y <= 4 && x >= 0 && x <= 2 && y >= 0 && y <= 2) || 
    (x*x + y*y == 4 && x >= -2 && x <= 0 && y >= 0 && y <= 2) || 
    (x*x + y*y == 4 && x >= 0 && x <= 2 && y >= -2 && y <= 0) || 
    (x*x + y*y >= 1 &&  x*x + y*y <= 4 && x >= -2 && x <= 0 && y >= -2 && y <= 0) || 
    (x*x + y*y >= 0 &&  x*x + y*y <= 1 && x >= 0 && x <= 1 && y >= -1 && y <= 0) || 
    (x*x + y*y >= 0 &&  x*x + y*y <= 1 && x >= -1 && x <= 0 && y >= 0 && y <= 1))
    {
        cout << "Координата (" << x << ";" << y << ") пренадлежит выделенному участку" << "\n";
    }

    else 
    {
        cout << "Координата (" << x << ";" << y << ") не пренадлежит выделенному участку" << "\n";
    }

    return 0;   
}