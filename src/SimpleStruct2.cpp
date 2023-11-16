#include <iostream>

using namespace std;

struct Customer {
    int id;
    string name;
    string email;
};

int main()
{
    Customer customer;

    cout << "Id: " << endl;
    cin >> customer.id;

    cout << "Name: " << endl;
    cin >> customer.name;

    cout << "Email: " << endl;
    cin >> customer.email;

    cout << "Id: " << customer.id << endl
        << "Name: " << customer.name << endl
        << "Email: " << customer.email;

    return 0;
}