#include <iostream>

int main ()
{
    /*
        sizeof () = memeriksa ukuran byte dari:
                    variabel, tipe data, array, class, object, dan lain-lain
    */

    std::string nama = "Dzulkifli Anwar";
    double nilai = 8.5;
    char huruf = 'X';
    bool konfirmasi = true;
    char alfabet [] = {'A', 'B', 'C', 'D', 'E', 'F'};
    std::string karakter [] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    std::cout << sizeof (nama) << " byte\n";
    std::cout << sizeof (nilai) << " byte\n";
    std::cout << sizeof (huruf) << " byte\n";
    std::cout << sizeof (konfirmasi) << " byte\n";
    std::cout << "\n";
    std::cout << sizeof (alfabet) / sizeof (char) << " elemen\n";
    std::cout << sizeof (karakter) / sizeof (std::string) << " elemen\n";

    return 0;
}