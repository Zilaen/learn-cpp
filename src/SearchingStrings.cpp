#include <iostream>

using namespace std;

int main()
{
    string name = "Anton, Vasilyev";

    cout << name.find('a') << endl;

    if (name.find('X') == -1)
        cout << "No such character found!" << endl;
    if (name.find('Vas') == -1)
        cout << "No such character found!" << endl;

    cout << name.rfind('a') << endl;

    cout << name.find_first_of(",.;") << endl;

    return 0;
}