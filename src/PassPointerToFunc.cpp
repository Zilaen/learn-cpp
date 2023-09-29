#include <iostream>

using namespace std;

void increasePrice(double* price) {
    *price *= 1.5;
}

int main()
{
    double price = 100;
    increasePrice(&price);
    cout << price;

    return 0;
}