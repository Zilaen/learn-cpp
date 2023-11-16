#include <iostream>

using namespace std;

int CheckInput(const string& title){
    int number;
    while (true) {
        cout << title;
        cin >> number;
        if (cin.fail()) {
            cout << "Please enter a valid number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else break;
    }

    return number;
}

int main()
{
    int first;
    int second;


    first = CheckInput("First: ");
    second = CheckInput("Second: ");

    cout << first << ", " << second;

    return 0;
}