#include <iostream>

using namespace std;

int main()
{
    // Located in Stack
    int exampless[1000];
    int example = 1;

    // Located in Heap (Free Store)
    int* numbers = new int[10];
    int* number = new int;

    delete[] numbers;
    delete number;

    numbers = nullptr;
    number = nullptr;

    return 0;
}