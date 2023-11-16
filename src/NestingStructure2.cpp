#include <iostream>

using namespace std;

struct Address {
    string street;
    string city;
    int zipcode;
};

struct Customer {
    int id = 0;
    string name;
    Address address;
    string email;
};

int main()
{
    Address address{"24 Crimson Av.", "Lake Side", 12345};
    Customer customer;

    customer = { 1, "Jack", address, "example@mail.com" };

    cout << customer.address.zipcode;

    return 0;
}