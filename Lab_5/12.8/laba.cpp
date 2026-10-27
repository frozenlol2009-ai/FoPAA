#include <iostream>
#include <windows.h>
using namespace std;

int main ()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    char bukva;
    cout << "Введите одну из букв, предложенных ниже:" << "\n";
    cout << "N B P D S" << "\n";
    cin >> bukva;

    switch (bukva)
    {
        case 'N':
        case 'n':
            cout << "Neman" << endl;
            break; 
        
        case 'B':
        case 'b':
            cout << "Berezina" << endl;
            break; 
        
        case 'P':
        case 'p':
            cout << "Pripyat" << endl;
            break; 
        
        case 'D':
        case 'd':
            cout << "Dnieper" << endl;
            break; 
        
        case 'S':
        case 's':
            cout << "Svisloch" << endl;
            break;

        default:
            cout << "Введена буква, не перечисленная в списке" << endl;
    }

    system("pause");
    return 0;   
}