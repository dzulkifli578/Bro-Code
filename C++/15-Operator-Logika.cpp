#include <iostream>

int main ()
{
    /*
        && = bernilai true apabila semua kondisi benar
        || = bernilai true apabila salah satu kondisi benar
        !  = bernilai true apabila kondisi salah
    */

    int suhu = 0;

    std::cout << "Masukkan suhu: ";
    std::cin >> suhu;

    if (suhu > 0 && suhu < 30)
    {
        std::cout << "Suhunya sedang bagus";
    }
    else
    {
        std::cout << "Suhunya sedang tidak bagus";
    }
    
    return 0;
}

