// Program to check a number is even or odd

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n % 2 == 0)
    {

        cout << "Entered number is even";
    }

    else
    {
        cout << "Entered number is odd";
    }
}