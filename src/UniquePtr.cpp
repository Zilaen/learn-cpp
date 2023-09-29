#include <iostream>
#include <memory>

using namespace std;

int main()
{
    auto numbers = make_unique<int[]>(10);
    auto y = make_unique<int>();

    numbers[0] = 7;
    cout << numbers[0];

    return 0;
}