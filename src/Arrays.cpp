#include <iostream>

using namespace std;

int main()
{
    string firstName;
    cout << "Enter first name: " << endl;
    getline(cin, firstName);

    string secondName;
    cout << "Enter second name: " << endl;
    getline(cin, secondName);

    string thirdName;
    cout << "Enter third name: " << endl;
    getline(cin, thirdName);

    string names[] = {firstName, secondName, thirdName};

    cout << names[0];

    return 0;
}