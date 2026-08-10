#include <iostream>
using namespace std;

int maxNo(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }

    else if (b > a && b > c)
    {
        return b;
    }
    
    else
    {
        return c;
    }
}

int main()
{
    int a, b, c;

    cout << "Enter a b and c: ";
    cin >> a >> b >> c;

    cout << maxNo(a, b, c) << " is max";

    return 0;
}