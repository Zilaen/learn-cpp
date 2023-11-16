#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file;
    file.open("test.csv");
    if (file.is_open())
    {
        string str;
        file >> str;
        cout << str;
        file.close();
    }
    return 0;
}