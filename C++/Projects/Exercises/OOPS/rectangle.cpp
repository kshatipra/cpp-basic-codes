/*Rectangle Class with Area and Perimeter

Write a C++ program to create a class called Rectangle that has private member variables for length and width.
Implement member functions to calculate the rectangle's area and perimeter. */
#include <iostream>

class Rectangle
{

    // private member variables
private:
    double width;
    double length;

    // member functions
public:
    Rectangle(double wid, double len) : width{wid}, length{len} {

                                        };

    double calc_area()
    {
        return length * width;
    }

    double calc_perimeter()
    {
        return 2 * (length + width);
    }
};

int main()
{
    Rectangle rect(14, 23);
    double area = rect.calc_area();
    double perim = rect.calc_perimeter();
    std::cout << "Area:" << area << "\n";
    std::cout << "Perim:" << perim << "\n";
}
