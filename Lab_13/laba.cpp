#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n=0;
    bool found = false;
    string got1;
    do 
    {
        cout << "Введите количество строк n (до 12 (включая)): "; cin >> n;
        if (n>12 || n<=0)
    {
        cout << "Введенное количество строк не совпадает с условиями." << endl;
    }
    }
    while (n>12 || n<=0);

    cin.ignore();
    vector<string> stroki;
    vector<string> gotovoe;

    cout << "Введите " << n << " строк(и), каждая не более 50 символов:\n";

    for (int i = 0; i < n; ++i) 
    {
        string s;
                
        while (true) 
        {
            cout << "Строка " << i + 1 << ": ";
            getline(cin, s);
            if (s.length() <= 50) 
            {
                stroki.push_back(s);
                break;
            }

            cout << "Ошибка: длина строки не должна превышать 50 символов.\n";

        }
    }

    cout << "\nСтроки, содержащие не менее 3 букв из набора W, G, D, F:\n";

    for (const auto& s : stroki) 
    {
        int count = 0;
        for (char bukva : s) 
        {
            char lower_bukva = tolower(static_cast<unsigned char>(bukva));

            if (lower_bukva == 'w' || lower_bukva == 'g' || lower_bukva == 'd' || lower_bukva == 'f') 
            {
                count++;
            }

        }
            if (count >= 3)
            {
                got1 = s;
                gotovoe.push_back(s);
                found = true;
            }
    }
    for (const auto& line : gotovoe)
        {
            cout << line << "\n";
        }
        
    if (found == false)
    {
        cout << "!!! Строк не найдено." << endl;
    }

    return 0;
    
}