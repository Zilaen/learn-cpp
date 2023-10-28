#include <iostream>

using namespace std;

int main()
{
    string name = "Anton Vasilyev";
    size_t divider = name.rfind(" ");

    string firstName = name.substr(0, divider);
    string lastName = name.substr(divider + 1);

    cout << "(" + firstName + ")";
    cout << "(" + lastName + ")";

    return 0;
}