#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    const short minValue = 1;
    const short maxValue = 6;

    srand(time(nullptr));

    short firstDice = (rand() % (maxValue - minValue + 1)) + minValue;
    short secondDice = (rand() % (maxValue - minValue + 1)) + minValue;

    cout << "First Dice: " << firstDice << "\n"
         << "Second Dice: " << secondDice;

    return 0;
}