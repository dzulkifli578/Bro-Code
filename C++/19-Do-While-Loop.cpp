#include <iostream>

int main ()
{
    /*
        do while loop = mengecek blok kode dahulu
                        lalu loop apabila kondisinya true
        sintaks       = do
                        {
                            blok_kode;
                        }
                        while (kondisi);
    */

    int angka = 0;

    do
    {
        std::cout << "Masukkan angka positif #: ";
        std::cin >> angka;
    } while (angka < 0);

    std::cout << "Angka # adalah: " << angka;

    return 0;
}