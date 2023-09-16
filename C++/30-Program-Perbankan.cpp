#include <iostream>
#include <iomanip>

void tampilkan_saldo (double saldo);
double deposit ();
double penarikan (double saldo);

int main ()
{
    double saldo = 0;
    int pilihan = 0;

    do
    {
        std::cout << "====================\n";
        std::cout << "1. Tampilkan Saldo\n";
        std::cout << "2. Deposit Uang\n";
        std::cout << "3. Tarik Uang\n";
        std::cout << "4. Keluar\n";
        std::cout << "====================\n";
        std::cout << "Masukkan pilihan:\n";
        std::cin >> pilihan;

        std::cin.clear ();
        fflush (stdin);

        switch (pilihan)
        {
            case 1: tampilkan_saldo (saldo);
                    break;
            case 2: saldo += deposit ();
                tampilkan_saldo (saldo);
                    break;
            case 3: saldo -= penarikan (saldo);
                tampilkan_saldo (saldo);
                    break;
            case 4: std::cout << "Terima kasih sudah berkunjung!\n";
                    break;
            default: std::cout << "Pilihan tidak valid\n";
        }
    } while (pilihan != 4);

    return 0;
}

void tampilkan_saldo (double saldo)
{
    std::cout << "Saldo anda: Rp" << std::fixed << std::setprecision (2) << saldo << "\n";
}

double deposit ()
{
    double jumlah = 0;

    std::cout << "Masukkan jumlah deposit: ";
    std::cin >> jumlah;

    if (jumlah > 0)
    {
        return jumlah;
    }
    else
    {
        std::cout << "Jumlah tidak valid\n";
        return 0.0;
    }
}

double penarikan (double saldo)
{
    double jumlah = 0;

    std::cout << "Masukkan jumlah penarikan: ";
    std::cin >> jumlah;

    if (jumlah > saldo)
    {
        std::cout << "Saldo tidak mencukupi\n";
        return 0.0;
    }
    else if (jumlah < 0)
    {
        std::cout << "Jumlah tidak valid\n";
        return 0.0;
    }
    else
    {
        return jumlah;
    }
}