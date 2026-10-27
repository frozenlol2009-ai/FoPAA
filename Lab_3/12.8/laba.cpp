#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

int main ()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int d, H, h, M, m, S, s, konS, konM, konH;
    
    cout << "Введите текущее значение часов:"; cin >> H;
    cout << "Введите текущее значение минут:"; cin >> M;
    cout << "Введите текущее значение секунд:"; cin >> S;
    cout << "Введите сколько пройдет часов:"; cin >> h;
    cout << "Введите сколько пройдет минут:"; cin >> m;
    cout << "Введите сколько пройдет секунд:"; cin >> s;
        
        int fullSec = H * 3600 + M * 60 + S;
        fullSec = fullSec + h * 3600 + m * 60 + s;
        fullSec = fullSec % 86400;

        konS = fullSec % 60;
        konM = (fullSec % 3600)/60;
        konH = fullSec / 3600;
        
    cout << "Конечное время: " << konH << ":" << konM << ":" << konS << "." << endl;
    system("pause");
    return 0;   
}