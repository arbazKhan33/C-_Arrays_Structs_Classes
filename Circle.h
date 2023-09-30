//Arbaz Khan (1940280)

// I combined circle.cpp and circle.h to one file which contains all member functions as well as circle class

#include <iostream>
#include <cmath>

using namespace std;

struct Point
{
    int x;
    int y;
};
class Circle
{

    int radius;
    Point center;

public:
    Circle()
    {
        radius = 10;
        center = { 0, 0 };
    }

    Circle(int rad, int xc, int yc)
    {
        radius = rad;
        center.x = xc;
        center.y = yc;
        if (rad <= 0)
        {
            cout << "Radius cannot be negative. Default value (10) is used" << endl;
            radius = 10;
        }
    }

    int getRadius()
    {
        return radius;
    }

    int getCenterX()
    {
        return center.x;
    }

    int getCenterY()
    {
        return center.y;
    }

    void setRadius(int rad)
    {
        if (rad <= 0)
        {
            cout << "Radius cannot be negative." << endl;
        }
        else
        {
            radius = rad;
        }
    }

    void setCenterX(int xCor)
    {
        center.x = xCor;
    }

    void setCenterY(int yCor)
    {
        center.y = yCor;
    }

    // distance

    double distance(Point p1, Point p2)
    {
        int x1 = p1.x;
        int y1 = p1.y;
        int x2 = p2.x;
        int y2 = p2.y;

        double result = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
        return result;
    }

    // area of the circle

    double getArea()
    {
        double area = 3.14159 * getRadius() * getRadius();
        return area;
    }

    // circumference 

    double getCircumference()
    {
        double circum = 2 * 3.14159 * getRadius();
        return circum;
    }

    // checks if point "i" is in the circle

    bool contains(Point cir)
    {
        if (radius >= cir.x && radius >= cir.y)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    // checks whether the circles intersect

    bool intersects(Circle c)
    {
        int radSum = radius + c.radius;

        double dist = distance(center, c.center);

        if (dist > radSum)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    
    // display Radius and Points

    void display()
    {
        cout << "radius: " << radius << ", center: (" << center.x << "," << center.y << ")" << endl;
    }
};

