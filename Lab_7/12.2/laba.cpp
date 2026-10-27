#include <iostream>

using namespace std;

    int main()
    {
    // стартовое число строки (от 9 до 5)
        for (int i = 9; i >= 8; i--) 
        {
            // пробелы для сдвига
            for (int space = 0; space < 9 - i; space++) 
            {
                std::cout << "  "; 
            }
            
            // вывод числа от i до 5
            for (int j = i; j >= 5; j--) 
            {
                std::cout << j << " ";
            }
            
            cout << "\n";
        }
        cout << "\n";
        for (int i = 6; i >= 5; i--) 
        {
            // пробелы для сдвига
            for (int space = 0; space < 9 - i; space++) 
            {
                std::cout << "  "; 
            }
            
            // вывод числа от i до 5
            for (int j = i; j >= 5; j--) 
            {
                std::cout << j << " ";
            }
            
            cout << "\n";
        }
    return 0;
}
