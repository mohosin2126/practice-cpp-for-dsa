#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    int x;
    char name[100];
    double gpa;
};

int main()
{
    Student x;
    cin.getline(x.name,100);
    cout<<x.name;
    return 0;
}