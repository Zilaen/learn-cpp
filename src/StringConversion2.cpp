#include <iostream>
#include <string>

using namespace std;

int main()
{
    double price = stod("19.99") + 1;
    cout << price << endl;

    string str = to_string(19.99f) + " " + "he-he";
    cout << str;

    return 0;
}