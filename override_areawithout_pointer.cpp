#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area()
    {
        cout << "Area of Shape" << endl;
    }
};

class Circle : public Shape
{
    float r;

public:
    Circle(float radius)
    {
        r = radius;
    }

    void area() override
    {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }
};

class Rectangle : public Shape
{
    float length, width;

public:
    Rectangle(float l, float w)
    {
        length = l;
        width = w;
    }

    void area() override
    {
        cout << "Area of Rectangle = " << length * width << endl;
    }
};

class Square : public Shape
{
    float side;

public:
    Square(float s)
    {
        side = s;
    }

    void area() override
    {
        cout << "Area of Square = " << side * side << endl;
    }
};

int main()
{
    Square s(5);
    Circle c(3);
    Rectangle r(4, 6);

    s.area();
    c.area();
    r.area();

    return 0;
}