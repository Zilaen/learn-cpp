#include <iostream>
#include <string>

using namespace std;

int main()
{
    char ch = '\'';
    cout << ch << endl;

    string str = "c:\\my folder";
    cout << str << endl;

    string str2 = "\"Hello World!\"";
    cout << str2 << endl;

    string str3 = "Hello\nWorld";
    cout << str3 << endl;

    string str4 = "Hello\t\t\t\tWorld";
    cout << str4 << endl;

    return 0;
}