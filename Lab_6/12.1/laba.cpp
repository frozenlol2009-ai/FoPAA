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
            
            {
            cout << "Значение X              Значение F(x)" << endl;
            while  (x  <= max)
            { 
                F = (x*x) + (9.5 / x) + sin(x*x*x);
                if (x == 0)
            {
                cout << "     0 - Недопустимое значение" << endl;
                x = x + dx;
            }

            else 
            {
                cout << "   " << x << "                    " << F << endl;
                x = x + dx;
            }

            }
            
            }
        }

        else
            cout << "Значение x  конечного не может быть меньше, чем x начальное. " << endl;

        return 1;
    }