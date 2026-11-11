#include <iostream>
using namespace std;

// void flip1(int* N)
void flip1(int* N) {
    int input = *N;
    int reversed = 0;
    
    while (input > 0) {
        reversed = reversed * 10 + (input % 10);
        input = input / 10;
    }
    
    *N = reversed;
}

// void flip2(int& N)
void flip2(int& N) {
    int input = N;
    int reversed = 0;
    
    while (input > 0) {
        reversed = reversed * 10 + (input % 10);
        input = input / 10;
    }
    
    N = reversed;
}

// int flip3(int N)
int flip3(int N) {
    int reversed = 0;
    
    while (N > 0) {
        reversed = reversed * 10 + (N % 10);
        N = N / 10;
    }
    
    return reversed;
}

int main() {
    int n1 = 567321;
    flip1(&n1);
    cout << "Variant 1: " << n1 << endl;

    int n2 = 567321;
    flip2(n2);
    cout << "Variant 2: " << n2 << endl;

    int n3 = 567321;
    int result3 = flip3(n3);
    cout << "Variant 3: " << result3 << endl;

    return 0;
}