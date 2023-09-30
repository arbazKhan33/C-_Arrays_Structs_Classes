//Arbaz Khan (1940280)

// Driver file created with the code given in the assignment sheet

#include <iostream>
#include "Circle.h"

using namespace std;


int main()
{

    Circle a = Circle();
    Circle b = Circle(3, -2, 4);
    Circle c = Circle(2, 2, 1);
    Circle d = Circle(-3, 5, 8);
    Point p1 = { 6, 7 };

    a.display();
    b.display();
    c.display();
    d.display();

    cout << a.getRadius() << endl;
    cout << b.getCenterX() << endl;
    cout << c.getCenterY() << endl;

    c.setRadius(-7);
    d.setRadius(5);
    d.setCenterX(-8);
    d.setCenterY(-15);

    c.display();
    d.display();

    cout << a.getArea() << endl;
    cout << b.getCircumference() << endl;

    if (a.contains(p1))
    {
        cout << "Circle a contains p1" << endl;
    }

    if (!b.contains(p1))
    {
        cout << "Circle b does not contain p1" << endl;
    }

    if (a.intersects(c))
    {
        cout << "Circle a intersects with Circle c" << endl;
    }

    if (!b.intersects(d))
    {
        cout << "Circle b does not intersect with Circle d" << endl;
    }

    if (b.intersects(c))
    {
        cout << "Circle b intersects with Circle c" << endl;
    }
}