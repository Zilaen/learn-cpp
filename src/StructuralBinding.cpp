#include <iostream>

using namespace std;

struct Movie {
    string title;
    int releaseYear = 0;
    bool isPopular;
};

int main()
{
    Movie movie = {"My Movie", 2024};

    //string title = movie.title;
    //int releaseYear = movie.releaseYear;
    //bool isPopular = movie.isPopular;

    auto [title, releaseYear, isPopular] { movie };

    cout << title;

    return 0;
}