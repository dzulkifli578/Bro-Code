#include <iostream>

int main ()
{
    // Array 2D (Array Multidimensional) = array didalam array
    
    int angka [3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int baris = sizeof (angka) / sizeof (angka [0]);
    int kolom = sizeof (angka [0]) / sizeof (angka [0][0]);

    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            std::cout << angka [i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}