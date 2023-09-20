#include <iostream>

void urut (int angka [], int ukuran);

int main ()
{
    int angka [10] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    int ukuran = sizeof (angka) / sizeof (int);

    urut (angka, ukuran);

    for (int i = 0; i < ukuran; i++)
    {
        std::cout << angka [i] << " ";
    }

    return 0;
}

void urut (int angka [], int ukuran)
{
    int sementara = 0;

    /*
       -1 dalam for loop digunakan karena elemen terakhir
        tidak perlu dibandingkan dan nilainya pasti lebih besar
    */
    for (int i = 0; i < ukuran - 1; i++)
    {
        for (int j = 0; j < ukuran - i - 1; j++)
        {
            if (angka [j] > angka [j + 1])
            {
                sementara = angka [j];
                angka [j] = angka [j + 1];
                angka [j + 1] = sementara;
            }
        }
    }

}