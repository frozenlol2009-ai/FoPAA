#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main ()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int x1, y1, x2, y2, x3, y3, x4, y4, P;

    cout << "Введите значение аргумента x1 точки А:"; cin >> x1;
    cout << "Введите значение аргумента y1 точки А:"; cin >> y1;
    cout << "Введите значение аргумента x2 точки B:"; cin >> x2;
    cout << "Введите значение аргумента y2 точки B:"; cin >> y2;
    cout << "Введите значение аргумента x3 точки C:"; cin >> x3;
    cout << "Введите значение аргумента y3 точки C:"; cin >> y3;
    cout << "Введите значение аргумента x4 точки D:"; cin >> x4;
    cout << "Введите значение аргумента y4 точки D:"; cin >> y4;

    int width1 = abs(x2-x1);
    int height1 = abs(y2-y1);
    int st1 = sqrt(width1 * width1 + height1 * height1);

    int width2 = abs(x3-x2);
    int height2 = abs(y3-y2);
    int st2 = sqrt(width2 * width2 + height2 * height2);

    int width3 = abs(x4-x3);
    int height3 = abs(y4-y3);
    int st3 = sqrt(width3 * width3 + height3 * height3);

    int width4 = abs(x1-x4);
    int height4 = abs(y1-y4);
    int st4 = sqrt(width4 * width4 + height4 * height4);
    
    P = st1 + st2 + st3 + st4;
    
    cout << "Периметр данного четырехугольника равен "  << P << endl;
    system("pause");
    return 0;
}
