#include <iostream>

using namespace std;

const double taxRate = .5;

void greet(string name);

int main()
{
    greet("Silent");
    return 0;
}

void greet(string name)
{
    cout << "Hello " << name;
}