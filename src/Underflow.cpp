#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int number = numeric_limits<int>::min();
    number--;

    cout << number;
    return 0;
}