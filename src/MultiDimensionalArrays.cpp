#include <iostream>

using namespace std;

int main()
{
    const int rows = 2;
    const int columns = 3;
    // 2x3
    int matrix[rows][columns] = {
        {11, 12, 13},
        {21, 22, 23}
    };

    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < columns; col++) {
            cout << matrix[row][col] << endl;
        }
    }

    return 0;
}