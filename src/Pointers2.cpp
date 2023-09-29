#include <iostream>

using namespace std;


int main()
{
    int x = 7;
    int y = 14;
    int* ptr = &x;
    *ptr *= 3;
    ptr = &y;
    *ptr *= 4;

    cout << x << endl
        << y;

    return 0;
}