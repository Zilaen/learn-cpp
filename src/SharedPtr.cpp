#include <iostream>
#include <memory>

using namespace std;

int main()
{
    auto x = make_shared<int>();
    *x = 9;

    shared_ptr<int> y(x);

    if (x == y)
        cout << "x equals y" << endl;

    return 0;
}