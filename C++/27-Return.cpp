#include <iostream>

int perpangkatan (int bilangan, int pangkat);

int main ()
{
    // return = mengembalikan nilai setelah memanggil fungsi

    int bilangan = 0, pangkat = 0;

    std::cout << "Masukkan bilangan: ";
    std::cin >> bilangan;

    std::cout << "Masukkan pangkat: ";
    std::cin >> pangkat;

    std::cout << "Hasil: " << perpangkatan (bilangan, pangkat);

    return 0;
}

int perpangkatan (int bilangan, int pangkat)
{
    int hasil = 1;
    
    for (int i = 1; i <= pangkat; i++)
    {
        hasil *= bilangan;
    }

    return hasil;
}