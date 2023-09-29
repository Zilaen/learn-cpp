#include <iostream>

using namespace std;

void swapNumbers(int values[], int i, int j) {
    int temp = values[i];
    values[i] = values[j];
    values[j] = temp;
}

void sortArray(int values[], size_t size){
    for(int pass = 0; pass < size; pass++){
        for (int i = 1; i < size; i++) {
            if (values[i] < values[i - 1])
                swapNumbers(values, i, i - 1);
        }
    }
}

int main()
{
    int values[] = {4, 7, 1, 11, 8, 5, 3};

    sortArray(values, size(values));
    for(int value: values){
        cout << value << endl;
    }

    return 0;
}