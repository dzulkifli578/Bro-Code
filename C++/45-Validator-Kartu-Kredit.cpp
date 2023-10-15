#include <iostream>

int dapatkan_digit (const int nomor);
int tambah_digit_ganjil (const std::string nomor_kartu);
int tambah_digit_genap (const std::string nomor_kartu);

int main ()
{
    std::string nomor_kartu;
    int hasil = 0;

    std::cout << "Masukkan nomor kartu kredit: ";
    std::cin >> nomor_kartu;

    hasil = tambah_digit_genap (nomor_kartu) + tambah_digit_ganjil (nomor_kartu);
    
    if (hasil % 10 == 0)
    {
        std::cout << nomor_kartu << " adalah nomor valid";
    }
    else
    {
        std::cout << nomor_kartu << " adalah nomor tidak valid";
    }

    return 0;
}

int dapatkan_digit (const int nomor)
{
    return nomor % 10 + (nomor / 10 % 10);
}

int tambah_digit_ganjil (const std::string nomor_kartu)
{
    int tambah = 0;

    for (int i = nomor_kartu.size () - 1; i >= 0; i -=2)
    {
        tambah += dapatkan_digit (nomor_kartu [i] - 48 );
    }

    return tambah;
}

int tambah_digit_genap (const std::string nomor_kartu)
{
    int tambah = 0;

    for (int i = nomor_kartu.size () - 2; i >= 0; i -=2)
    {
        tambah += dapatkan_digit ((nomor_kartu [i] - 48 ) * 2);
    }

    return tambah;
}