#include <iostream>
using namespace std;

void F(int N, int& first, int& last) 
{ 
    last = N % 10;

    while(N>=10)
    {
        N = N/10;
    }
    first = N;
} 

int main() 
{ 
    int N = 387;
    int first = 0;
    int last= 0;
 

    F(N, first, last); 
 
    cout << "First  = " << first << endl; 
    cout << "Last = " << last << endl; 
    
    return 0; 

}