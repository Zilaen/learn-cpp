#include <iostream>

using namespace std;


bool isValid(string customerNumber)
{
    if (customerNumber.length() != 6)
        return false;

    for (int i = 0; i < 2; i++)
    {
        if (!isdigit(customerNumber[i]))
            return false;
    }

    for (int i = 2; i < customerNumber.length(); i++)
    {
        if (!isalpha(customerNumber[i]))
            return false;
    }

    return true;
}

int main()
{
    string number = "20FGXX";

    cout << isValid(number);

    return 0;
}