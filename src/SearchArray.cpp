#include <iostream>

using namespace std;

int searchArray(int values[], int size, int number)
{
    for(int i = 0; i < size; i++)
    {
        if(values[i] == number)
        {
            return values[i];
            break;
        }
    }

    return -1;
}

int main()
{
    int values[] = {1, 2, 3, 4};
    int ourNumber = 2;

    cout << searchArray(values, size(values), ourNumber);

    return 0;
}