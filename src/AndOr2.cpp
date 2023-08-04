#include <iostream>

using namespace std;

int main()
{
    // ()
    // !
    // &&
    // ||
    
    bool isUSCitizen = true;
    bool isBachelor = false;
    short yearsOfExperience = 2;

    bool isEligible = isUSCitizen && (isBachelor || (yearsOfExperience >= 2));
    cout << "Is eligible: " << boolalpha << isEligible;

    return 0;
}