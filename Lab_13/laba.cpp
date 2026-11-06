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

    cout << "Введите количество строк n: "; cin >> n;

    if (n>12 || n<=0)
    {
        cout << "Введенное количество строк не совпадает с условиями." << endl;
        return 1;
    }

    else 
    {
        cin.ignore();
        vector<string> stroki;

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

    // Проверка условий и вывод результата
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

        if (count >= 3) {
            cout << s << "\n";
        }
    }

    }

    return 0;
}
