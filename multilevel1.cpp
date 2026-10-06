#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int rollNo;

public:
    void getStudent()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;
    }
};

class StudentMarks : public Student
{
protected:
    int marks[5];

public:
    void getMarks()
    {
        cout << "Enter marks of 5 subjects (out of 100):" << endl;

        for(int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};

class StudentResult : public StudentMarks
{
public:
    void display()
    {
        int total = 0;
        float percentage;

        for(int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }

        percentage = (total / 500.0) * 100;

        cout << "\nStudent Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;

        cout << "\nMarks:" << endl;

        for(int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": " << marks[i] << endl;
        }

        cout << "\nTotal Marks: " << total << " / 500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    StudentResult s;

    s.getStudent();
    s.getMarks();
    s.display();

    return 0;
}