#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file;
    file.open("test.txt");
    if (file.is_open())
    {
        file << "Hello there!";
	file.close();
    }

    return 0;
}