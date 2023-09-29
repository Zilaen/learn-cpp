#include <iostream>

using namespace std;

bool isSorted = true;

void sortArray(int values[], int size) {
    do {
        isSorted = true;

        for (int i = 1; i < size; i++) {
            int temp = 0;

            if (values[i] < values[i - 1]) {
                isSorted = false;
                temp = values[i];
                values[i] = values[i - 1];
                values[i - 1] = temp;
            }
        }

    } while (!isSorted);
}

void printNumbers(int numbers[], int size){
    for(int i = 0; i < size; i++)
        cout << numbers[i] << endl;
}

int main()
{
    int values[] = {4, 7, 1, 11, 8, 5, 3};

    sortArray(values, size(values));
    printNumbers(values, size(values));

    return 0;
}