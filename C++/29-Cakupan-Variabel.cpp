#include <iostream>

// variabel global
int angka_global = 10;

int main ()
{
    /*
        Cakupan variabel terdiri dari 2:
        - Variabel lokal  = variabel yang dideklarasikan dalam blok kode
        - Variabel global = variabel yang dideklarasikan luar blok kode
    */

    // variabel lokal
    int angka = 5;
    std::cout << angka << "\n";

    std::cout << angka_global;

    return 0;
}