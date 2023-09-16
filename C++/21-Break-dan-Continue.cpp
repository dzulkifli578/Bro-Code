#include <iostream>

int main ()
{
    /*
        break    = menghentikan loop
        continue = melewati terakhir loop dan melanjutkannya ke loop selanjutnya
    */

    for (int i = 1; i <= 15; i++)
    {
        if (i == 5)
        {
            continue;
        }
        if (i == 13)
        {
            break;
        }

        std::cout << i << "\n";
    }
    return 0;
}