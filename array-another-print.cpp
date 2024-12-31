// when we don't need any index that time we can print like this way 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x[10]; 
    for (int i = 0; i < 10; i++) {
        cin >> x[i];
    }
    for (int elem : x) { 
        cout << elem << " ";
    }

    return 0;
}
