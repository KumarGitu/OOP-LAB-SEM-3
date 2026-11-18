//Runtime Polymorphism using virtual function

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
};

class Circle : public Shape
{
    double radius;

public:
    void getdata()
    {
        cout << "Enter radius: ";
        cin >> radius;
    }

    double area()
    {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Shape
{
    double length, breadth;

public:
    void getdata()
    {
        cout << "Enter length and breadth: ";
        cin >> length >> breadth;
    }

    double area()
    {
        return length * breadth;
    }
};

class Triangle : public Shape
{
    double base, height;

public:
    void getdata()
    {
        cout << "Enter base and height: ";
        cin >> base >> height;
    }

    double area()
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    Triangle t;

    Shape *s;

    s = &c;
    c.getdata();
    cout << "Area of Circle: " << s->area() << endl;

    s = &r;
    r.getdata();
    cout << "Area of Rectangle: " << s->area() << endl;

    s = &t;
    t.getdata();
    cout << "Area of Triangle: " << s->area() << endl;

    return 0;
}