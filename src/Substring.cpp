#include <iostream>

using namespace std;

int main()
{
    string name = "Anton Vasilyev";
    string copy = name.substr(6, 2);

    name = "";
    cout << copy;

    return 0;
}