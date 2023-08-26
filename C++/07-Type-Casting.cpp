#include <iostream>

int main ()
{
    // Type casting = konversi nilai tipe data ke tipe data yang lain

    // Implisit (diubah secara otomatis)
    int bilangan = 5;
    float desimal = 5.5;

    std::cout << "Implisit\n";
    std::cout << bilangan + desimal << "\n"; //hasilnya bernilai tipe data float
    
    // Eksplisit (diubah secara manual)
    int angka = 7.9;

    std::cout << "Eksplisit\n";
    std::cout << (float) angka;

    return 0;
}  