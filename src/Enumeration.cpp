#include <iostream>

using namespace std;

enum Action 
{
    List = 1,
    Add,
    Update
};

int main()
{

    cout <<
        "1. List invoices" << endl <<
        "2. Add invoice" << endl <<
        "3. Update invoice" << endl <<
        "Select:";

    int input;
    cin >> input;

    if (input == Action::List)
        cout << "List invoices.";
    if (input == Action::Add)
        cout << "Add invoice.";
    if (input == Action::Update)
        cout << "Update invoice.";

    return 0;
}