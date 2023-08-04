#include <iostream>

using namespace std;

int main()
{
    int temperatures[] = {24, 30, 15, 12, 0};
    double allTemperatures = 0;
    short temperaturesCount = sizeof(temperatures) / sizeof(int);

    for(int temperature: temperatures)
    {
        allTemperatures += temperature;
    }

    double averageTemperature = 0;
    averageTemperature = allTemperatures / temperaturesCount;

    cout << "Average temperature is: " << averageTemperature;

    return 0;
}