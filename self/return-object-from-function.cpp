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

Student fun()
{
    Student karim(2, 4, 5.00);
    return karim;
}

int main()
{
    Student obj = fun();
    cout << obj.roll << obj.cls << obj.gpa << endl;
    return 0;
}