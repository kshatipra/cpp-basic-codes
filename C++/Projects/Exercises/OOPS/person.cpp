/* Person Class with Name, Age, and Country

Write a C++ program to create a class called Person that has private member variables for name, age and country.
Implement member functions to set and get the values of these variables. */

#include <iostream>
#include <string>

class Person
{
    // access modifier
private:
    std::string name;
    int age;
    std::string country;

public:
    Person(std::string name, int age, std::string country) : name(name), age(age), country(country) {};

    void set_values(std::string name, int age, std::string country)
    {
        this->name = name;
        this->age = age;
        this->country = country;
    }

    std::string get_name()
    {
        return name;
    }

    int get_age()
    {
        return age;
    }

    std::string get_country()
    {
        return country;
    }

    // to return everything in one using a tuple and call using auto
    std::tuple<std::string, int, std::string> get_details()
    {
        return {name, age, country};
    }
};

int main()
{
    Person person("Pratiksha", 23, "India");
    person.set_values("Alex", 23, "Germany");
    std::cout << "Person Details:\n";
    std::cout << "Name:" << person.get_name() << "\n";
    std::cout << "Country:" << person.get_country() << "\n";
    std::cout << "Age:" << person.get_age() << "\n";
}