#include <iostream>
#include <windows.h>
#include <cmath>
#include <iomanip>
using namespace std;

double f(double x) 
{
    return -3.5 * pow(x, 3) + 6.4 * x - 2.4;
}

int main() {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    double a, b;
    double tochnost = 0.005;

    cout << "Введите начало интервала a: "; cin >> a;
    cout << "Введите конец интервала b: "; cin >> b;

    if ((b - a > 1) || (f(a) * f(b) >= 0) )
    {
        cout << "Ошибка в некорректности интервала.\n";
        return 1;
    }

    else
    {
        cout << "\nСчетчик\t\ta\t\tb\t\tx1\t\tf(x1)\n";
        cout << fixed << setprecision(5);

        double x1;
        int schetchik = 1;

        // Цикл метода деления отрезка пополам
        while ((b - a) / 2.0 > tochnost) 
        {
            x1 = (a + b) / 2.0;
            double fx1 = f(x1);

            cout <<  schetchik << "\t\t" << a << "\t\t" << b << "\t\t" << x1 << setw(17) << fx1 << "\n";

            // Проверка знака и выбор нового интервала
            if (f(a) * fx1 < 0) 
            b = x1;

            else 
            a = x1;

            schetchik++;
        }

        x1 = (a + b) / 2.0;
        cout << "---------------------------------------------------------\n";
        cout << "Найденное значение корня: x = " << x1 << "\n";
        cout << "Значение функции в корне: f(x) = " << f(x1) << "\n";
    }

    return 0;
}