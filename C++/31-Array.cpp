#include <iostream>

int main ()
{
    /*
        array = struktur data yang menyimpan banyak nilai
                nilai array diakses menggunakan nomor index
                array seperti variabel yang menyimpan banyak nilai
    */

    std::string makanan [] = {"Mie goreng", "Singkong goreng", "Roti bakar"};

    std::cout << makanan [0] << "\n";
    std::cout << makanan [1] << "\n";
    std::cout << makanan [2] << "\n";

    return 0;
}