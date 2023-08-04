#include <iostream>

using namespace std;

int main()
{
    int secret = 1;
    int guess = 0;

    while(guess != secret)
    {
        cout << "Guess a number: " << endl;        
        cin >> guess;
    }

    return 0;
}