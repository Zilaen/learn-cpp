#include <iostream>

using namespace std;

int main()
{
    int numbers[] = { 2, 4, 6 };
    int* ptr = numbers;
    ptr++;
    ptr--;

    cout << *(ptr+1) << ", ";
    cout << ptr[1] << ", ";
    cout << numbers[1];

    return 0;
}