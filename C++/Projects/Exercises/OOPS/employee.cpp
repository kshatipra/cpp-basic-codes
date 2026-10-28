/*Employee Class with Salary Based on Performance

Write a C++ program to implement a class called Employee that has private member variables for name,
employee ID, and salary. Include member functions to calculate and set salary based on employee performance.*/

#include <iostream>

class Employee
{
private:
    std::string name;
    std::string emp_id;
    int salary;

public:
    Employee(std::string name, std::string emp_id, int salary) : name(name), emp_id(emp_id), salary(salary) {}

    void set_salary(std::string emp_perf)
    {
        if (emp_perf == "Good")
        {
            salary = salary + 50000;
        }
        else if (emp_perf == "Ok")
        {
            salary = salary + 20000;
        }
        else
        {
            salary = salary + 10000;
        }
    }
};

int main()
{

    Employee employee_1("Pratiksha", "111", 50000);
    Employee employee_2("Abhishek", "123", 60000);
}