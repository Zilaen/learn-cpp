#include <iostream>

using namespace std;

int main()
{
    cout << "Please enter positive number." << endl
         << "Program will provide factorial of this number:" << endl;

    int someNumber = 0;
    cin >> someNumber;

    if(someNumber < 0)
    {
        cout << "Error! Please enter positive number.";
    }
    else
    {
        int factorial = 1;
        for(int i = 1; i <= someNumber; i++)
        {
            factorial *= i;
        }

        cout << "Factorial equals: " << factorial << endl;
    }

    return 0;
}