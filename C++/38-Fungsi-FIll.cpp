#include <iostream>

int main ()
{
    /*
        fill () = fungsi untuk mengisi jangkauan elemen dengan nilai spesifik
        sintak  = fill (awal, akhir, nilai)
    */

    const int ukuran = 10;
    std::string nama [ukuran];

    fill (nama, nama + (ukuran / 2), "Dzul");
    fill (nama + (ukuran / 4), nama + (ukuran * 3/ 4), "Love");
    fill (nama + (ukuran / 2), nama + ukuran, "Sonya");
    
    for (std::string nama1 : nama)
    {
        std::cout << nama1 << "\n";
    }

    return 0;
}