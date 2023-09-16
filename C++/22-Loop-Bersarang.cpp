#include <iostream>

int main ()
{
    int panjang = 0, lebar = 0;
    char simbol;

    std::cout << "Masukkan panjang: ";
    std::cin >> panjang;
    std::cout << "Masukkan lebar: ";
    std::cin >> lebar;
    std::cout << "Masukkan simbol: ";
    std::cin >> simbol;

    for (int i = 1; i <= lebar; i++)
    {
        for (int j = 1; j <= panjang; j++)
        {
            std::cout << simbol << " ";
        }
        std::cout << "\n";
    }
    return 0;
}