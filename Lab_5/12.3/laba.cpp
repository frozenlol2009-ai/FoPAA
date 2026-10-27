#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int cifra;
    cout << "Введите любое десятичное число:";
    cin >> cifra;

    switch (cifra)
    {
        case 0:
            cout << "Ноль" << endl;
            break; 
        
        case 1:
            cout << "Один" << endl;
            break; 
        
        case 2:
            cout << "Два" << endl;
            break; 
        
        case 3:
            cout << "Три" << endl;
            break; 
        
        case 4:
            cout << "Четыре" << endl;
            break; 
        
        case 5:
            cout << "Пять" << endl;
            break; 
        
        case 6:
            cout << "Шесть" << endl;
            break; 
        
        case 7:
            cout << "Семь" << endl;
            break; 
        
        case 8:
            cout << "Восемь" << endl;
            break; 
        
        case 9:
            cout << "Девять" << endl;
            break; 

        default:
            cout << "Введенное число не десятичное" << endl;
    }

    return 0;   
}