#include <iostream>

namespace sepuluh
{
    int x = 10;
}

namespace seratus
{
    int x = 100;
}

int main ()
{
    // namespace = keyword untuk mengelompokkan nama elemen yang sama (variabel, fungsi, class) supaya tidak terjadi konflik
    
    int x = 5;

    // simbol :: = operator cakupan (scope resolution operator)
    // :: digunakan untuk mengakses anggota dari namespace, class, atau structure
    
    std::cout << x << "\n";
    std::cout << sepuluh::x << "\n";
    std::cout << seratus::x << "\n";

    return 0;
}  