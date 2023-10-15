#include <iostream>

int main ()
{
    /*
        alamat memori = lokasi memori dimana data disimpan
        alamat memori bisa diakses dengan & (operator alamat)
    */

    std::string nama = "Dzulkifli Anwar";
    int umur = 16;
    bool pelajar = true;

    std::cout << &nama << "\n";
    std::cout << &umur << "\n";
    std::cout << &pelajar << "\n";
    
    return 0;
}