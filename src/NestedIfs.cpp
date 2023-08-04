#include <iostream>

using namespace std;

int main()
{
    bool isUSCitizen = true;
    bool isCACitizen = true;
    short tuition = 0;

    if(isUSCitizen)
    {
        if(isCACitizen)
        {
            tuition = 0;
        }
        else
        {
            tuition = 1000;
        }
    }
    else
    {
        tuition = 3000;
    }

    cout << "Current tuition: " << tuition << endl;
}