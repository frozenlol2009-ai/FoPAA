#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

    int main()
    { 
        SetConsoleCP(65001);
        SetConsoleOutputCP(65001);

        int k;
        double sum = 0.0;

        cout << "Введите k: "; cin >> k;
        if (k>=1)
        {
            for (int i = 0; i <k; i++)
            {
                i++;
                sum += (-i + i/(6.7*k));
                // cout << sum << "\n";
                i--;
            }
            cout << "Сумма равна " << sum << endl;
        }
        else 
        {
            cout << "Введен неправильный коэффицент k." << endl;
        }
    }