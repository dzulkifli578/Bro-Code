#include <iostream>

void panggilan (std::string nama, int kali);

int main ()
{
    // fungsi = blok kode yang dapat digunakan kembali
    
    std::string nama;
    int kali = 0;

    std::cout << "Siapa namamu?: ";
    std::getline (std::cin, nama);

    std::cout << "Mau dipanggil berapa kali?: ";
    std::cin >> kali;

    panggilan (nama, kali);

    return 0;
}

void panggilan (std::string nama, int kali)
{
    for (int i = 1; i <= kali; i++)
    {
        std::cout << "Halo " << nama << "\n";
    }
}
