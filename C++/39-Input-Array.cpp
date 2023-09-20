#include <iostream>

int main ()
{
    std::string makanan [5], sementara;
    int ukuran = sizeof (makanan) / sizeof (std::string);

    for (int i = 0; i < ukuran; i++)
    {
        std::cout << "Masukkan makanan yang kamu suka (ketik 'k' untuk keluar) #: " << i + 1 << ": ";
        std::getline (std::cin, sementara);

        if (sementara == "q")
        {
            break;
        }
        else
        {
            makanan [i] = sementara;
        }
    }
    
    std::cout << "Kamu menyukai makanan berikut:\n";

    for (int i = 0; !makanan [i].empty (); i++)
    {
        std::cout << "- " << makanan [i] << "\n";
    }
    return 0; 
}