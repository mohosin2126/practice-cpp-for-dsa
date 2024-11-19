#include <bits/stdc++.h>
using namespace std;
int *p;
void func()
{
    int x = 10;
    p = &x;
    cout << *p << endl;
}
int main()
{
    // func();
    cout << *p << endl;
    return 0;
}