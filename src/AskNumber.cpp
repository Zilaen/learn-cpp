#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    while(number < 1 || number > 5)
    {
        cout << "Number: " << endl;
        cin >> number;
        if(number < 1 || number > 5)
        {
            cout << "Please provide number between 1 and 5!" << endl;
        }
    }

    return 0;
}