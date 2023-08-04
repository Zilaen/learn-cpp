#include <iostream>

using namespace std;

int main()
{
    int values[3] = {10, 20, 30};
    auto [x, y, z] = values;
    cout << x << " " << y << " " << z;
    return 0;
}