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
    void ShowObj()
    {
        cout << "x= " << x << endl;
        cout << "y= " << y << endl;
    }
    Point operator+ (const Point& other)
    {
        Point temp;
        temp.x = this->x + other.x;
        temp.y = this->y + other.y;
        return temp;

    }
   bool operator==(const Point& other)
    {
       return this->x == other.x && this->y == other.y;
    }
   bool operator!=(const Point& other)
   {
       return !(this->x == other.x && this->y == other.y);
   }

   Point& operator++()//Prefix increment
   {
       this->x++;
       this->y++;
       return *this;
   }
   Point& operator ++(int value)//Postfix increment
   {
       Point temp(*this);
       this->x++;
       this->y++;

       return temp;
   }
   Point& operator--()//Prefix decrement
   { 
       this->x--;
       this->y--;
       return *this;
   }
   Point& operator --(int value)//Postfix decrement
   {
       Point temp(*this);
       this->x--;
       this->y--;

       return temp;
   }

   
};
class Array
{
private:
    int arr[5] = { 23,44,67,90,33 };
public:
    int& operator [](int index)//Overload []
    {
        return arr[index];
    }
};

int main()
{
    Point a(1, 6);
    Point b(5, 6);
    Point c=a + b;
    cout << "Object a: " << endl;
    a.ShowObj();
    cout << "Object b: " << endl;
    b.ShowObj();
    cout << "Object c: " << endl;
    c.ShowObj();
    bool result = a == b;
    if (result)
    {
        cout << "A==B" << endl;
    }
    else
    {
        cout << "A!=B" << endl;
    }
    bool result2 = b != c;
    if (result2)
    {
        cout << "B!=C" << endl;
    }
    else
    {
        cout << "B==C" << endl;
    }
    ++a;
    ++b;
    ++c;
    cout << "Object c after prefix increment: " << endl;
    c.ShowObj();
    c++;
    cout << "Object c after postfix increment: " << endl;
    c.ShowObj();
    --c;
    cout << "Object c after prefix decrement: " << endl;
    c.ShowObj();
    c--;
    cout << "Object c after postfix decrement: " << endl;
    c.ShowObj();

    Array arr;
    cout <<"Arr[0]= "<< arr[0] << endl;
    arr[0] = 9;
    cout << "Arr[0]= " << arr[0] << endl;


    return 0;
}

