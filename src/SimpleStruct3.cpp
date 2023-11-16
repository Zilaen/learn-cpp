#include <iostream>

using namespace std;

struct Movie {
    string name;
    int releaseYear = 0;
    bool isPopular;
};

int main()
{
    Movie movie = {"My Movie", 2024};

    cout << movie.releaseYear;

    return 0;
}