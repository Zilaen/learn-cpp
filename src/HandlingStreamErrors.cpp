#include <iostream>

using namespace std;

int main()
{
    int first;
    int second;

    while (true) {
        cout << "First:";
        cin >> first;
        if (cin.fail()) {
            cout << "Please enter a valid number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else break;
    }

    while(true){
        cout << "Second:";
        cin >> second;
        if (cin.fail()) {
            cout << "Please enter a valid number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else break;
    }

    cout << first << ", " << second;

    return 0;
}