#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream file;
    file.open("test.csv");
    if (file.is_open())
    {
        string str;
        while (!file.eof()) {
            getline(file, str);
            cout << str << endl;
        }
        file.close();
    }
    return 0;
}