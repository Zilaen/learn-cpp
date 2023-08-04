#include <iostream>

using namespace std;

void greet(string name)
{
    cout << "Hello " << name << endl;
}

string fullName(string firstName, string lastName)
{
    return firstName + " " + lastName;
}

int main()
{
    greet(fullName("Anton", "Vasilev"));
    cout << "Done.";
    return 0;
}