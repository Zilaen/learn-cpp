#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";

    int rows = 0;
    cin >> rows;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}