// Problem : Write a C++ program to implement a class called Circle that has private member variables for radius.
// Include member functions to calculate the circle's area and circumference.

#include <iostream>
#include <math.h>

class Circle
{

    double radius;
    double pi = M_PI;

public:
    // constructor must be public
    Circle(double rad) : radius(rad) {}

    double circle_area()
    {
        double area = pi * radius * radius;
        return area;
    }

    double circle_circum()
    {
        double circum = 2 * pi * radius;
        return circum;
    }
};

int main()
{
    Circle circle(9.5);

    std::cout << "Circle area:" << circle.circle_area() << "\n";

    std::cout << "Circle circumference:" << circle.circle_circum();

    return 0;
}
