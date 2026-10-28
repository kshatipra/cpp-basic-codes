/*Triangle Class with Side Lengths and Type Determination

Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides.
Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.*/

#include <iostream>

class Triangle
{
private:
    double side_a, side_b, side_c;

public:
    Triangle(double side_a, double side_b, double side_c) : side_a(side_a), side_b(side_b), side_c(side_c) {}
    std::string triangle_type()
    {
        std::string type;
        if (side_a == side_b == side_c)
        {
            type = "equilateral";
        }
        else if ((side_a == side_b) or (side_b == side_c) or (side_c == side_a))
        {
            type = "isoceles";
        }
        else
        {
            type = "scalene";
        }
        return type;
    }
};

int main()
{
    double side_a, side_b, side_c;
    std::cout << "Enter the three sides of your triangle";
    std::cin >> side_a >> side_b >> side_c;
    Triangle triangle(side_a, side_b, side_c);
    std::cout << "Traingle type:" << triangle.triangle_type();
}