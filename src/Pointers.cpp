#include <iostream>

using namespace std;


int main()
{
    int number = 5;
    int* ptr = &number;

    *ptr += 2;

    cout << number;

    return 0;
}