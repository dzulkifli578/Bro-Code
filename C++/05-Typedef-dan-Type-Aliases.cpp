#include <iostream>

/*
    typedef = pemberian nama baru ke tipe data yang ada
              sangat berguna untuk tipe data yang panjang
*/

// typedef dapat ditulis dalam 2 format:

// format typedef
// sintaks = typedef {tipe_data} {nama_baru};
typedef int bilangan_bulat;

// format using
// sintaks = using {nama_baru} = {tipe_data};
using bilangan_bulat = int;

int main ()
{
    bilangan_bulat x = 5;

    std::cout << x;
    
    return 0;
}  