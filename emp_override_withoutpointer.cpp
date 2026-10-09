#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void calculateSalary()
    {
        cout << "Employee Salary" << endl;
    }
};

class Manager : public Employee
{
    float basic, bonus;

public:
    Manager(float b, float bo)
    {
        basic = b;
        bonus = bo;
    }

    void calculateSalary() override
    {
        cout << "Manager Salary = " << basic + bonus << endl;
    }
};

class Developer : public Employee
{
    float basic, allowance;

public:
    Developer(float b, float a)
    {
        basic = b;
        allowance = a;
    }

    void calculateSalary() override
    {
        cout << "Developer Salary = " << basic + allowance << endl;
    }
};

int main()
{
    float b, x;

    cout << "Enter Manager basic salary: ";
    cin >> b;

    cout << "Enter Manager bonus: ";
    cin >> x;

    Manager m(b, x);

    cout << "Enter Developer basic salary: ";
    cin >> b;

    cout << "Enter Developer allowance: ";
    cin >> x;

    Developer d(b, x);

    m.calculateSalary();
    d.calculateSalary();

    return 0;
}