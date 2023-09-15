#include <iostream>

int main ()
{
    /*
        for loop = loop yang sudah ditentukan temponya
        sintaks  = for (inisialisasi; kondisi; perubahan)
        {
            blok_kode;
        }
    */

    int angka = 5;

    for (int i = 1; i <= angka; i++)
    {
        std::cout << i << " ";
    }

    return 0;
}