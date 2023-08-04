#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";

    int rows = 0;
    cin >> rows;

    int counter = 1;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <= counter; j++)
        {
            cout << "*";
        }
        counter++;
        cout << endl;
    }

    return 0;
}