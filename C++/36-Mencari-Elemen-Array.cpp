#include <iostream>

int cari_array (int angka [], int ukuran, int elemen);

int main ()
{
    int angka [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int ukuran = sizeof (angka) / sizeof (int);
    int elemen = 0;
    
    std::cout << "Masukkan elemen yang ingin dicari: ";
    std::cin >> elemen;

    int index = cari_array (angka, ukuran, elemen);

    if (index != -1)
    {
        std::cout << elemen <<  " berada di index " << index;
    }
    else
    {
        std::cout << elemen << " bukan berada di array";
    }
    return 0;
}

int cari_array (int angka [], int ukuran, int elemen)
{
    for (int i = 0; i < ukuran; i++)
    {
        if (angka [i] == elemen)
        {
            return i;
        }
    }
    return -1;
}