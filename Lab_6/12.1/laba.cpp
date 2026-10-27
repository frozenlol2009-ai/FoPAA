#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

    int main()
    { 
        SetConsoleCP(65001);
        SetConsoleOutputCP(65001);

        double max, x , dx, F;
        cout << "Введите x начальное: "; cin >> x ;
        cout << "Введите x конечное: "; cin >> max;
        cout << "Введите шаг dx: "; cin >> dx;

        if  (x <max)
        { 
            if (x == 0)
            {
                cout << "0 - Недопустимое значение" << endl;
                return 0;
            }
            else 
            {
            cout << "Значение F              Значение X" << endl;
            while  (x  <= max)
            { 
                F = (x*x) + (9.5 / x) + sin(x*x*x);
                cout << F << "                       " << x << endl;
                x = x + dx;
            }
            }
        }

        else
            cout << "------------------------" << endl;

        return 1;
    }