#include <iostream>

int main ()
{
    std::string soal [] = {"1. Kapan C++ dibuat?: ",
                           "2. Siapa pencipta C++?: ",
                           "3. Siapa suksesor C++?: ",
                           "4. Apakah bumi datar?: "};

    std::string pilihan [][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                                 {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. John Carmack", "D. Mark Zuckerberg"},
                                 {"A. C", "B. C+", "C. C--", "B++"},
                                 {"A. Ya", "B. Tidak", "C. Terkadang", "D. Apa itu bumi?"}};
    
    char jawaban [] = {'C', 'B', 'A', 'B'};

    int ukuran = sizeof (jawaban) / sizeof (char);
    char perkiraan;
    int skor = 0;

    for (int i = 0; i < ukuran; i++)
    {
        std::cout << "==============================\n";
        std::cout << soal [i] << "\n";
        std::cout << "==============================\n";

        for (int j = 0; j < sizeof (pilihan[i]) / sizeof (pilihan [i][0]); j++)
        {
            std::cout << pilihan [i][j] << "\n";
        }

        std::cin >> perkiraan;

        perkiraan = toupper (perkiraan);

        if (perkiraan == jawaban [i])
        {
            std::cout << "BENAR!\n";
            skor++;
        }
        else
        {
            std::cout << "SALAH!\n";
            std::cout << "Jawaban: " << jawaban [i] << "\n";
        }

    }

    std::cout << "==============================\n";
    std::cout << "             NILAI            \n";
    std::cout << "==============================\n";
    std::cout << "Benar: " << skor << "\n";
    std::cout << "# dari soal: " << ukuran << "\n";
    std::cout << "SKOR: " << (skor / (double) ukuran) * 100 << "%";
    return 0;
}