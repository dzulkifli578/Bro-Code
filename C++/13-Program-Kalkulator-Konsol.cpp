#include <iostream>

int main ()
{
    char simbol;
    float bilangan1 = 0, bilangan2 = 0;

    std::cout << "******************************************\n";
    std::cout << "               KALKULATOR\n";
    std::cout << "******************************************\n";
    
    std::cout << "Pilih salah satu operator (+ - * /): ";
    std::cin >> simbol;

    std::cout << "Masukkan bilangan 1: ";
    std::cin >> bilangan1;
    std::cout << "Masukkan bilangan 2: ";
    std::cin >> bilangan2;

    switch (simbol)
    {
        case '+':
            std::cout << "Hasil: " << bilangan1 + bilangan2 << "\n";
            break;
        case '-':
            std::cout << "Hasil: " << bilangan1 - bilangan2 << "\n";
            break;
        case '*':
            std::cout << "Hasil: " << bilangan1 * bilangan2 << "\n";
            break;
        case '/':
            std::cout << "Hasil: " << bilangan1 / bilangan2 << "\n";
            break;
        default:
            std::cout << "Respon tidak valid";
    }

    std::cout << "******************************************\n";

    return 0;
}  