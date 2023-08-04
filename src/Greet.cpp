#include <iostream>

using namespace std;

void greet(string firstName, string lastName)
{
    cout << "Hello " << firstName << " " << lastName << "!" << endl;
}

int main()
{
    greet("Anton", "Vasilev");
    cout << "Done.";
    return 0;
}