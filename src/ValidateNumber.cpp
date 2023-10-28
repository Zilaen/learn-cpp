#include <iostream>

using namespace std;


bool isValid(string customerNumber)
{
    bool result = (isdigit(customerNumber[0]) == 
                   isdigit(customerNumber[1]) ==
                   isalpha(customerNumber[2]) ==
                   isalpha(customerNumber[3]) ==
                   isalpha(customerNumber[4]) ==
                   isalpha(customerNumber[5])
        ) && customerNumber.length() == 6;
    return result;
}

int main()
{
    string number = "20FGXD";

    cout << isValid(number);

    return 0;
}