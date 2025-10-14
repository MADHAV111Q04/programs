#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int x_=0, int y_=0): x(x_), y(y_) {}
    Point operator+(const Point &p) { // Binary + Overload
        return Point(x + p.x, y + p.y);
    }
    void show() { cout << "Point: (" << x << ", " << y << ")" << endl; }
};

int main() {
    Point p1(1, 2), p2(3, 4);
    Point p3 = p1 + p2; // Uses overloaded +
    p3.show();
    return 0;
}


