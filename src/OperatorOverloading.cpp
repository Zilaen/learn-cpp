#include <iostream>

using namespace std;

struct Date {
    short releaseYear = 1900;
    short releaseMonth = 1;
    short releaseDay = 1;
};

struct Movie {
    string title;
    Date date;
    bool isPopular;

    bool operator==(const Movie& movie) const
    {
        return (date.releaseDay == movie.date.releaseDay &&
            date.releaseMonth == movie.date.releaseMonth &&
            date.releaseYear == movie.date.releaseYear &&
            title == movie.title);
    }
};

int main()
{
    Movie movie1{
        "My Movie",
        { 2024, 12, 16 }
    };

    Movie movie2{
    "My Movie",
    { 2024, 12, 16 }
    };

    cout << (movie1 == movie2);

    return 0;
}