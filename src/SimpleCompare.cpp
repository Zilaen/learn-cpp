#include <iostream>

using namespace std;

int compare(int firstNumber, int secondNumber)
{
   return firstNumber > secondNumber ? firstNumber : secondNumber;
}

int main()
{
    cout << compare(1, 30);
    return 0;
}