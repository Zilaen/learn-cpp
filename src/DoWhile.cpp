#include <iostream>

using namespace std;

int main()
{
    int number;

    do
    {
        cout << "Number: " << endl;
        cin >> number;
    }
    while (number < 1 || number > 5);
    return 0;
}