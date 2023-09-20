#include <iostream>

int main ()
{
    /*
        sintaks perulangan elemen array:
        for (inisialisasi; sizeof (variabel_array) / sizeof (tipe_data); perubahan)
        {
            array [index];
        }
    */

    std::string karakter [] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    for (int i = 0; i < sizeof (karakter) / sizeof (std::string); i++)
    {
        std::cout << "- " << karakter [i] << "\n";
    }

    return 0;
}