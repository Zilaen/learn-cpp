#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << left << setw(12) << "Course" << setw(12) << "Students" << endl
         << left << setw(10) << "C++" << right << setw(10) << 100 << endl
         << left << setw(10) << "JavaScript" << right << setw(10) << 50;
    return 0;
}