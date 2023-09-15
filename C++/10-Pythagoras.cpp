#include <iostream>
#include <cmath>

int main ()
{
    float a = 0, b = 0;

    std::cout << "Masukkan sisi A: ";
    std::cin >> a;

    std::cout << "Masukkan sisi B: ";
    std::cin >> b;

    std::cout << sqrt (pow (a, 2) + pow (b,2));
    
    return 0;
}