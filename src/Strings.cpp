#include <iostream>

using namespace std;

int main()
{
    string name = "Anton";
    name[0] = 'a'; // name.front() = 'a';

    cout << name << endl;
    cout << name.length() << endl;

    name += " Vasilyev";
    cout << name << endl;

    string temp = name; // copying

    if (name == temp)
        cout << "name and temp are equal!" << endl;

    //cout << temp.starts_with('a'); // C++ 20

    cout << name.empty();

    return 0;
}