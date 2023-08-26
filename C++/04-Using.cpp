#include <iostream>

// using = keyword untuk menggunakan semua anggota namespace tanpa simbol ::

// using namespace std; digunakan untuk tujuan general (umum atau tidak spesifik)
using std::cout;     // digunakan untuk tujuan spesifik, std::cout untuk memangkas penulisan cout

int main ()
{
    cout << "Halo dunia!";
    
    return 0;
}  