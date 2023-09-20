#include <iostream>

double dapatkan_total (double harga [], int ukuran);

int main ()
{
    /*
        untuk menggunakan array dalam fungsi harus
        disertai ukuran array yang sudah diketahui

        karena fungsi tidak akan tau ukuran array sendiri itu berapa
    */

    double harga [] = {1.500, 2.000, 2.500, 3.000};
    int ukuran = sizeof (harga) / sizeof (double);
    double total = dapatkan_total (harga, ukuran);

    std::cout << "Rp" << total;

    return 0;
}

double dapatkan_total (double harga [], int ukuran)
{
    double total = 0;

    for (int i = 0; i < ukuran; i++)
    {
        total += harga [i];
    }

    return total;
}