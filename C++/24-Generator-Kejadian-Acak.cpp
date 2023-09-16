#include <iostream>

int main ()
{
    srand (time(NULL));

    int acak = rand () % 5 + 1;
    
    switch (acak)
    {
        case 1:
            std::cout << "Kamu memenangkan basreng!\n";
            break;
        case 2:
            std::cout << "Kamu memenangkan botol Aqua 1 liter!\n";
            break;
        case 3:
            std::cout << "Zonk!\n";
            break;
        case 4:
            std::cout << "Kamu memenangkan Tipe-X!\n";
            break;
        case 5:
            std::cout << "Kamu memenangkan kartu XL!\n";
            break;
    }
    return 0;
}