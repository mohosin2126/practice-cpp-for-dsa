#include <bits/stdc++.h>
using namespace std;
int *p;
void fun()
{
    int x = 10;
    p = &x;
    cout << "void" << *p;
}
int main()
{
    fun();
    cout << *p << endl;
    return 0;
}