#include <iostream>

int main ()
{
    /*
        ternary operator ?: = alternatif if/else statement
        // sintaks          = kondisi ? ekspresi_true : ekspresi_false;
    */

    int nilai = 85;

    //ternary operator

    nilai >= 70 ? std::cout << "Kamu lulus!" : std::cout << "Kamu tidak lulus!";

    /*
        if/else statement:
        if (nilai >= 70)
        {
            std::cout << "Kamu lulus!";
        }
        else
        {
            std::cout << "Kamu tidak lulus!";
        }

    */

    return 0;
}