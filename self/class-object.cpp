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
    Student x;
    x.roll = 10;
    char temp[] = "mohosin";
    strcpy(x.name, temp);
    x.gpa = 3.86;
    cout << x.roll<<" " << x.name <<" "<< x.gpa << endl;

    return 0;
}