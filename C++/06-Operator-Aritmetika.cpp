#include <iostream>

int main ()
{
    int x = 10;

    // tambah
    x += 5;
    std::cout << "Tambah    : " << x << "\n";

    // kurang
    x = 10;
    x -= 5;
    std::cout << "Kurang    : " << x << "\n";

    // kali
    x = 10;
    x *= 5;
    std::cout << "Kali      : " << x << "\n";

    // bagi
    x = 10;
    x /= 5;
    std::cout << "Bagi      : " << x << "\n";

    // modulus
    x = 10;
    x %= 5;
    std::cout << "Modulus   : " << x << "\n";

    // increment
    x = 10;
    x++;
    std::cout << "Increment : " << x << "\n";

    // decrement
    x = 10;
    x--;
    std::cout << "Decrement : " << x << "\n";

    return 0;
}  