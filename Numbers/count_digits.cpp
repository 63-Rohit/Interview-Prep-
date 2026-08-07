// //Count digits

// Input-->1000

// Output-->4

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int count = 0;
    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        int ans = ans * 10 + rem;

        count++;
    }
    cout << count;
}