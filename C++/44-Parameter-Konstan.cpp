#include <iostream>

int main ()
{
    /*
        parameter konstan = parameter read-only yang efektif
                            menyampaikan informasi yang kebih aman
                            berguna untuk reference dan pointer
    */

    std::string nama = "Dzulkifli Anwar";
    int umur = 16;

    biodata (nama, umur);

    return 0;
}

void biodata (const std::string &nama, const int &umur)
{
    // nama = " ";
    // umur = 0;
    std::cout << nama << "\n";
    std::cout << umur << "\n";
}