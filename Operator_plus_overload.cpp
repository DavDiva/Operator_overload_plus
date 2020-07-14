#include <iostream>
using namespace std;
class Point
{
private:
    int x;
    int y;
public:
    Point()
    {
        x = 0;
        y = 0;
    }
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    Point operator+ (const Point& other)
    {
        Point temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        return temp;

    }
    void ShowObj()
    {
        cout <<"x= "<< x << endl;
        cout <<"y= "<< y << endl;
    }
};

int main()
{
    Point a(5, 6);
    Point b(8, 12);
    Point c=a + b;
    cout << "Object a: " << endl;
    a.ShowObj();
    cout << "Object b: " << endl;
    b.ShowObj();
    cout << "Object c: " << endl;
    c.ShowObj();

    return 0;
}

