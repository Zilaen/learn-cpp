#include <iostream>

using namespace std;

int main()
{
    cout << "Welcome to Basic Calculator!" << endl
         << "Please enter two numbers" << endl
         << "Then enter an operator (+, -, *, /)" << endl
         << "You will see the result shortly." << endl;

    double firstNumber = 0;
    double secondNumber = 0;
    char operand;
    double result = 0;

    cin >> firstNumber >> secondNumber >> operand;

    switch(operand)
    {
        case '+':
            result = firstNumber + secondNumber;
            break;
        case '-':
            result = firstNumber - secondNumber;
            break;
        case '*':
            result = firstNumber * secondNumber;
            break;
        case '/':
            result = firstNumber / secondNumber;
            break;
        default:
            cout << "Error: Incorrect operator!" << endl;
    }

    cout << "Result is equal to: " << result;

    return 0;
}