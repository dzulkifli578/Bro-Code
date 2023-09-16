#include <iostream>

int tambah (int a, int b);
int tambah (int a, int b, int c);
int tambah (int a, int b, int c, int d);

int main ()
{
    // fungsi overload = fungsi yang sama dengan parameter yang berbeda
    
    int a = 0, b = 0, c = 0, d = 0, kali = 0;

    std::cout << "Mau ditambah berapa kali? (1-3): ";
    std::cin >> kali;

    switch (kali)
    {
        case 1:
            std::cout << "Masukkan angka 1: ";
            std::cin >> a;
            std::cout << "Masukkan angka 2: ";
            std::cin >> b;
            std::cout << "Hasil: " << tambah (a, b);
            break;
        case 2:
            std::cout << "Masukkan angka 1: ";
            std::cin >> a;
            std::cout << "Masukkan angka 2: ";
            std::cin >> b;
            std::cout << "Masukkan angka 3: ";
            std::cin >> c;
            std::cout << "Hasil: " << tambah (a, b, c);
            break;
        case 3:
            std::cout << "Masukkan angka 1: ";
            std::cin >> a;
            std::cout << "Masukkan angka 2: ";
            std::cin >> b;
            std::cout << "Masukkan angka 3: ";
            std::cin >> c;
            std::cout << "Masukkan angka 4: ";
            std::cin >> d;
            std::cout << "Hasil: " << tambah (a, b, c, d);
            break;
        default:
            std::cout << "Input error\n";

    }

    return 0;
}

int tambah (int a, int b)
{
    return a + b;
}

int tambah (int a, int b, int c)
{
    return a + b + c;
}

int tambah (int a, int b, int c, int d)
{
    return a + b + c + d;
}
