#include <iostream>

int main ()
{
    std::string nama;

    std::cout << "Masukkan nama: ";
    std::getline (std::cin, nama);

    if (nama.length () > 12)
    {
        std::cout << "Namamu tidak bisa lebih dari 12 karakter\n";
    }
    else if (nama.length () > 0)
    {
        std::cout << "Selamat datang!\n";
    }

    if (nama.empty ())
    {
        std::cout << "Kamu belum memasukkan nama\n";
    }
    else
    {
        std::cout << "Halo " << nama;
    }

    /*
        nama.clear (lokasi_karakter, ')           = fungsi untuk membersihkan (mengosongkan) isi dari string
        nama.erase (index_awal, index_terakhir)   = fungsi untuk menghapus karakter sesuai yang ditentukan
        nama.append (kasih_isi)                   = funsgi untuk menambahkan isi (teks) ke string
        nama.at (lokasi_karakter)                 = fungsi untuk menyebut karakter sesuai lokasi karakter yang ditentukan
        nama.insert (lokasi_karakter, "karakter") = fungsi untuk menambahkan karakter sesuai lokasi karakter yang ditentukan
        nama.find ('karakter')                    = fungsi untuk menemukan karakter

    */
   
    return 0;
}