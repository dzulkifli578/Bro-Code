#include <iostream>

int main ()
{
    /*
        pointer = variabel yang menyimpan alamat memori dari variabel lain

        * = operator referensi
        & = operator alamat memori
    */

    std::string nama = "Dzulkifli Anwar";
    std::string *pointer_nama = &nama;

    int umur = 16;
    int *pointer_umur = &umur;

    int angka [5] = {1, 2, 3, 4, 5};
    int *pointer_angka = angka;

    std::cout << *pointer_nama << "\n";
    std::cout << *pointer_umur << "\n";
    std::cout << *pointer_angka;
    return 0;

}