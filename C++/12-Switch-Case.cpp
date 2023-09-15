#include <iostream>

int main ()
{
    // switch = alternatif dari if statement untuk mencocokkan kasus

    unsigned short bulan = 0;

    std::cout << "Masukkan bulan (1-12): ";
    std::cin >> bulan;

    switch (bulan)
    {
        case 1:
            std::cout << "Januari";
            break;
        case 2:
            std::cout << "Februari";
            break;
        case 3:
            std::cout << "Maret";
            break;
        case 4:
            std::cout << "April";
            break;
        case 5:
            std::cout << "Mei";
            break;
        case 6:
            std::cout << "Juni";
            break;
        case 7:
            std::cout << "Juli";
            break;
        case 8:
            std::cout << "Agustus";
            break;
        case 9:
            std::cout << "September";
            break;
        case 10:
            std::cout << "Oktober";
            break;
        case 11:
            std::cout << "November";
            break;
        case 12:
            std::cout << "Desember";
            break;
        default:
            std::cout << "Input error";
            break;
    }
    
    return 0;
}  