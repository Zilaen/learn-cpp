#include <iostream>

using namespace std;

int main()
{
    const int list = 1;
    const int add = 2;
    const int update = 3;

    cout <<
        "1. List invoices" << endl <<
        "2. Add invoice" << endl <<
        "3. Update invoice" << endl <<
        "Select:";

    int input;
    cin >> input;

    if (input == list)
        cout << "List invoices.";
    if (input == add)
        cout << "Add invoice.";
    if (input == update)
        cout << "Update invoice.";

    return 0;
}