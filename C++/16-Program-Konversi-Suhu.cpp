#include <iostream>

int main ()
{
    float suhu = 0;
    char simbol;

    std::cout << "********** KONVERSI SUHU **********\n";
    std::cout << "C = Celsius\n";
    std::cout << "F = Fahrenheit\n";
    std::cout << "Pilih salah satu unit yang ingin dikonversi: ";
    std::cin >> simbol;
    
    if (simbol == 'C' || simbol == 'c')
    {
        std::cout << "Masukkan suhu dalam Fahrenheit: ";
        std::cin >> suhu;

        std::cout << "Suhunya adalah: " << (suhu - 32) / 1.8 << "\xb0\n";
    }
    else if (simbol == 'F' || simbol == 'f')
    {
        std::cout << "Masukkan suhu dalam Celsius: " << "\n";
        std::cin >> suhu;

        std::cout << "Suhunya adalah: " << (1.8 * suhu) + 32 << "\xb0\n";
    }
    else
    {
        std::cout << "Harap masukkan antara C atau F\n";
    }

    std::cout << "***********************************";

    return 0;
}