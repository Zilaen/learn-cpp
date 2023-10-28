#include <iostream>

using namespace std;

int main()
{
    string name = "Anton";
    name.append(" Vasilyev");
    name.insert(0, "I am ");
    name.erase(0, 2);
    //name.clear();
    name.replace(0, 2, "i_");

    cout << name;

    return 0;
}