#include <bits/stdc++.h>
using namespace std;

// with constructor

class Student
{
public:
    int roll;
    char name[100];
    double gpa;

    Student(int roll, const char *name, double gpa)
    {
        this->roll = roll;
        strcpy(this->name, name);
        this->gpa = gpa;
    }
};

int main()
{
    Student student1(1, "John Doe", 3.5);
    cout << "Roll: " << student1.roll << endl;
    cout << "Name: " << student1.name << endl;
    cout << "GPA: " << student1.gpa << endl;

    return 0;
}

// without constructor
#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    char name[100];
    double gpa;
};

int main()
{
    Student student1;
    student1.roll = 1;
    strcpy(student1.name, "John Doe");
    student1.gpa = 3.5;
    cout << "Roll: " << student1.roll << endl;
    cout << "Name: " << student1.name << endl;
    cout << "GPA: " << student1.gpa << endl;

    return 0;
}
