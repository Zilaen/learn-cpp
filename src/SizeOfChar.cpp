#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << sizeof(char) << endl
         << numeric_limits<char>::min() << endl
         << numeric_limits<char>::max();
    return 0;
}