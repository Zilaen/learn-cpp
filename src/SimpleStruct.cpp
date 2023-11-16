#include <iostream>

using namespace std;

struct Movie {
    string title;
    int releaseYear;
};

int main()
{
    Movie movie;

    movie.title = "My Movie";
    movie.releaseYear = 2024;

    cout << "Title: " << movie.title << endl
         << "Year: " << movie.releaseYear;

    return 0;
}