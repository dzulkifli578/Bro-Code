#include <iostream>

int main ()
{
    // const = keyword untuk mengubah nilai variabel menjadi konstan (tetap) dan hanya dibaca

    const double pi = 3.14159;
    // pi = 0;
    double jari_jari = 10;

    std::cout << 2 * pi * jari_jari << " cm";

    return 0;
}