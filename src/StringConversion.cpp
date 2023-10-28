#include <iostream>

using namespace std;

int main()
{
    string name = "Anton Vasilyev";

    cout << isupper(name[0]) << endl;
    cout << islower(name[0]) << endl;
    cout << isalpha(name[0]) << endl;
    cout << isdigit(name[0]) << endl;
    cout << isspace(name[0]) << endl;

    cout << (char) toupper('a') << endl; // C Style casting
    cout << (char) tolower('A') << endl;

    return 0;
}