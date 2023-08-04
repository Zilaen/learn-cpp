#include <iostream>

using namespace std;

int main()
{
    int firstNumber;
    int secondNumber;
    int result;

    cout << "Please enter first number:" << endl;
    cin >> firstNumber;

    cout << "Please enter second number:" << endl;
    cin >> secondNumber;

    result = firstNumber > secondNumber ? firstNumber : secondNumber;
    cout << "Bigger number is: " << result;

    return 0;
}