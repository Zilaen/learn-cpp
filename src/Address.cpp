#include <iostream>

using namespace std;

int main()
{
    string street;
    string city;
    string state;
    int zipcode;

    cout << "Please enter your street:";
    getline(cin, street);

    cout << "Please enter your city:";
    getline(cin, city);

    cout << "Please enter your state:";
    getline(cin, state);

    cout << "Please enter your ZIP code:";
    cin >> zipcode;

    cout << street << endl
         << city << ", "
         << state << ", "
         << zipcode;

    return 0;
}