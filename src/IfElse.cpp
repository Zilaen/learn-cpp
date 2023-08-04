#include <iostream>

using namespace std;

int main()
{
    int sales = 15'000;
    int comission;

    if(sales > 15'000)
    {
        comission = 20;
    }
    else if(sales > 10'000)
    {
        comission = 15;
    }
    else
    {
        comission = 10;
    }
    cout << "Your commission is: " << comission << "%";

    return 0;
}