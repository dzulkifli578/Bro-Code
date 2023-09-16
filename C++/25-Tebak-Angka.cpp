#include <iostream>

int main ()
{
    int angka = 0, kira = 0, coba = 0;

    srand (time(NULL));
    angka = rand () % 100 + 1;

    std::cout << "========== TEBAK ANGKA ==========\n";

    do
    {
        std::cout << "Masukkan angka antara 1-100: ";
        std::cin >> kira;
        coba++;

        if (kira > angka)
        {
            std::cout << "Terlalu tinggi\n";
        }
        else if (kira < angka)
        {
            std::cout << "Terlalu rendah\n";
        }
        else
        {
            std::cout << "BENAR! kamu mengira sebanyak " << coba << " kali\n";
        }
    } while (kira != angka);

    return 0;
}