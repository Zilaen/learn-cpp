#include <iostream>

using namespace std;

int main()
{
    cout << "First:";
    int first;
    cin >> first;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Second:";
    int second;
    cin >> second;

    cout << first << ", " << second;

    return 0;
}