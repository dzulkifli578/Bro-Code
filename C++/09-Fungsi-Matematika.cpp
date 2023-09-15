#include <iostream>
#include <cmath>

int main ()
{
    double x = 3.14, y = 4;

    // max = menentukan nilai maksimal
    std::cout << std::max (x,y) << "\n";

    // min = menentukan nilai maksimal
    std::cout << std::min (x,y) << "\n";

    // pow (power) = perpangkatan bilangan
    // sintaks pow (bilangan, pangkat)
    std::cout << pow (5, 5) << "\n";

    // sqrt (square root) = akar kuadrat
    std::cout << sqrt (25) << "\n";

    // abs (absolute) = nilai absolut bilangan
    std::cout << abs (-5) << "\n";

    // round = pembulatan bilangan
    std::cout << round (x) << "\n";

    // ceil (langit-langit) = menaikkan bilangan positif +1
    //                        menetapkan bilangan negatif
    std::cout << ceil (x) << "\n";

    // floor (lantai) = menetapkan bilangan positif
    //                  menurunkan bilangan negatif -1
    std::cout << floor (x) << "\n";
    
    return 0;
}  