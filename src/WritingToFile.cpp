#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ofstream file;
    file.open("test.csv");
    if (file.is_open())
    {
        file << "id,title,year \n"
             << "0,My Movie,2024 \n"
             << "1,My Movie 2,2026 \n";

        file << setw(20) << "Hello" << setw(20) << "there!";

        file.close();
    }

    return 0;
}