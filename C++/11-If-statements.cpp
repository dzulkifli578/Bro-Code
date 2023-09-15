#include <iostream>

int main ()
{
    // if statements = mengeksekusi blok kode apabila kondisi benar
    //                dan tidak melakukannya apabila kondisi salah
    
    short umur = 0;

    std::cout << "Masukkan umurmu: ";
    std::cin >> umur;

    if (umur >= 18)
    {
        std::cout << "Selamat datang ke situs!";
    }
    else if (umur <= 0)
    {
        std::cout << "Kamu belum lahir!";
    }
    else
    {
        std::cout << "Umurmu belum cukup untuk masuk ke situs ini!";
    }

    return 0;
}