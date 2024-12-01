#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    double gpa;
    int cls;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    };
};


int main()
{
    Student rahim(3,5,5.00);
    // karim is a dynamic object
    Student *karim=new Student(2,5,5.00);
    return 0;
}