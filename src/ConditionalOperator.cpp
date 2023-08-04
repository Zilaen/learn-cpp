#include <iostream>

using namespace std;

int main()
{
    int sales = 11'000;
    double comission = (sales > 10'000) ? .1 : .05;
    cout << comission;
    return 0;
}