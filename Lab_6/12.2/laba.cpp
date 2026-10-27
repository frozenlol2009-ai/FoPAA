#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

    int main()
    { 
        SetConsoleCP(65001);
        SetConsoleOutputCP(65001);

        double x, F, sum = 0.0;
        int n=0;
        cout << "Введите x: "; cin >> x ;

        F = x*x + sin(x*x*x);

        cout << "Значение f(x) = " << F << "\n";
        do 
        {
            n++;            
            sum += 1.0 / n;
        } 
        while (sum < F);
        cout << "Наименьшее n = " << n << endl;
        cout << "При этом сумма ряда = " << sum << endl;
        return 0;
    }