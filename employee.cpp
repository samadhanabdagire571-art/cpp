#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float salary;

public:
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void display()
    {
        cout << "\nEmployee Details\n";
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;

    e.input();
    e.display();

    return 0;
}