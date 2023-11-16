#include <iostream>

using namespace std;

int main()
{
    cout <<
        "1. List invoices" << endl <<
        "2. Add invoice" << endl <<
        "3. Update invoice" << endl <<
        "Select:";

    int input;
    cin >> input;

    if (input == 1)
        cout << "List invoices.";
    if (input == 2)
        cout << "Add invoice.";
    if (input == 3)
        cout << "Update invoice.";

    return 0;
}