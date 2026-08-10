#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the value of a, b and c: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << a << " is maximum";
    }
    else if (b >= a && b >= c)
    {
        cout << b << " is maximum";
    }
    else
    {
        cout << c << " is maximum";
    }

    return 0;
}