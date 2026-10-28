/*Car Class with Company, Model, and Year Write a C++ program to create a class called
Car that has private member variables for company, model,  and year.
Implement member functions to get and set these variables.*/
#include <iostream>
#include <string>
#include <tuple>

class Car
{

    std::string company;
    std::string model;
    int year;

public:
    void set_details(std::string company, std::string model, int year)
    {
        this->company = company;
        this->model = model;
        this->year = year;
    }

    std::tuple<std::string, std::string, int> get_details()
    {
        return {company, model, year};
    }
};

int main()
{

    Car car;
    car.set_details("BMW", "ix3", 2026);
    auto [company, model, year] = car.get_details();
    std::cout << company;
}
