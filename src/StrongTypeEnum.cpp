#include <iostream>

using namespace std;

enum class Action 
{
    List = 1,
    Add,
    Update
};

enum class Operation
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

    if (input == static_cast<int>(Action::List))
        cout << "List invoices.";
    if (input == static_cast<int>(Action::Add))
        cout << "Add invoice.";
    if (input == static_cast<int>(Action::Update))
        cout << "Update invoice.";

    return 0;
}