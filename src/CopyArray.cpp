#include <iostream>

using namespace std;

int main()
{
    int first[] = {10, 20, 30};
    int second[size(first)];

    for (int i = 0; i < size(first); i++)
        second[i] = first[i];

    for (int each: second)
        cout << each << endl;

    return 0;
}