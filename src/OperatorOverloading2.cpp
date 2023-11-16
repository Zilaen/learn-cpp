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

};

    bool operator==(const Movie& movie1, const Movie& movie2)
    {
        return (movie1.date.releaseDay == movie2.date.releaseDay &&
            movie1.date.releaseMonth == movie2.date.releaseMonth &&
            movie1.date.releaseYear == movie2.date.releaseYear &&
            movie1.title == movie2.title);
    }

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