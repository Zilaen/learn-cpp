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

int main()
{
    //Date date{ 2024, 12, 16 };
    Movie movie{ 
        "My Movie", 
        { 2024, 12, 16 } 
    };
    cout << movie.date.releaseYear << endl
         << movie.date.releaseMonth << endl
         << movie.date.releaseDay << endl;

    return 0;
}