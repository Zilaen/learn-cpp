#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

bool operator==(const Point& point1, const Point& point2){
    return (point1.x == point2.x && point1.y == point2.y);
}

ostream& operator<<(ostream& stream, const Point& point) {
    return stream << point.x << ", " << point.y;
}

int main()
{
    Point point1{ 1, 0 };
    Point point2{ 1, 1 };

    cout << (point1 == point2) << endl
        << point1 << endl
        << point2;
    return 0;
}