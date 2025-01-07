#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *a = new int[3];
    cout << "Enter 3 elements for array a: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    int *b = new int[5];
    for (int i = 0; i < 3; i++)
    {
        b[i] = a[i];
    }
    b[3] = 50;
    b[4] = 60;
    cout << "Elements of array b are: " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << b[i] << endl;
    }
    delete[] a;

    return 0;
}
