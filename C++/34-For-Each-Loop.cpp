#include <iostream>

int main ()
{\
    /*
        for-each loop = loop yang memudahkan perulangan data
        sintaks       = for (inisialisasi : variabel)
                        {
                            blok_kode;
                        }
    */
    
    std::string karakter [] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    for (std::string karakter1 : karakter)
    {
        std::cout << "- " << karakter1 << "\n";
    }

    return 0;
}