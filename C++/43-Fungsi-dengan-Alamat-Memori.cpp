#include <iostream>

void tukar (std::string &x, std::string &y);

int main ()
{
    std::string x = "Minyak";
    std::string y = "Air";

    tukar (x, y);

    std::cout << "X: " << x << "\n";
    std::cout << "Y: " << y << "\n";

    return 0;
}

void tukar (std::string &x, std::string &y)
{
    std::string sementara;

    sementara = x;
    x = y;
    y = sementara;

}