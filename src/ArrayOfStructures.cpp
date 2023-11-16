#include <iostream>
#include <vector>

using namespace std;

struct Movie {
    string title;
    int releaseYear = 0;
    bool isPopular;
};

int main()
{
    vector<Movie> movies;

    //Movie movie = { "My Movie", 2024 };
    //movies.push_back(movie);

    movies.push_back({ "My Movie 1", 2024 });
    movies.push_back({ "My Movie 2", 2026 });

    cout << movies[1].title << endl;

    for (const auto& movie : movies)
        cout << movie.releaseYear << endl;

    return 0;
}