#include <iostream>

using namespace std;

void greet(const string& name)
{
    cout << "Hello " << name;
}

int main()
{
    string name = "Anton";
    greet(name);
    return 0;
}