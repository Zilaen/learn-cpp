#include <iostream>

using namespace std;

int main()
{
    // null terminator (\0)
    char name[60] = {'A', 'n', 't', 'o', 'n', '\0'};
    cout << name << endl;

    // string literal
    char surname[9] = "Vasilyev";
    cout << surname << endl;

    // character literal
    surname[0] = 'v';
    cout << surname[0] << endl;

    cout << strlen(name) << endl;

    char city[] = "Paris"; // not defined size

    // concatenating (combining) strings
    strcat_s(name, surname);
    cout << name << endl;

    // copy
    char temp[] = "SomeCStringsForCopy";
    strcpy_s(temp, name);
    cout << temp << endl;

    // compare
    if(strcmp(name, temp) == 0)
        cout << "temp equals name." << endl;

    return 0;
}