#include <iostream>

int main ()
{
    std::string nama;

    /*
        while loop = loop yang akan terus terulang selama kondisinya true
        sintaks    = while (kondisi)
                     {
                         blok_kode;
                     }
    */
    
    while (nama.empty ())
    {
        std::cout << "Masukkan namamu: ";
        std::getline (std::cin, nama);
    }

    std::cout << "Halo " << nama;

    return 0;
}