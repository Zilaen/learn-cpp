#include <iostream>

using namespace std;

void swap(int* first, int* second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

int main()
{
    int first = 1;
    int second = 2;

    swap(&first, &second);

    cout << first << endl << second;

    return 0;
}