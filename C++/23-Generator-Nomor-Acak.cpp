#include <iostream>

int main ()
{
    // pseudo-acak = bukan beneran acak (tapi hampir acak)
    
    // srand (seed random) = menggunakan waktu sekarang sebagai biji acak
    srand (time (NULL));

    /*
        rand (random) = fungsi menghasilkan angka acak
        gunakan modulus untuk membatasi rentang angka yang diacak
        + 1 digunakan untuk mengakali rentang angka acak yang dimulai dari 0
    */

    int angka1 = rand () % 6 + 1;
    int angka2 = rand () % 6 + 1;
    int angka3 = rand () % 6 + 1;

    std::cout << angka1 << "\n";
    std::cout << angka2 << "\n";
    std::cout << angka3 << "\n";

    return 0;
}