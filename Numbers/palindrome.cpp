// Palindrome program

// 121-->1 2 1
// 151-->1 5 1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int rem, ans = 0;
    int original = n;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        ans = ans * 10 + rem;
    }
    if (original == ans)
    {
        cout << "Yes it is a Palindrome ";
    }
    else
    {
        cout << "Not a Palindrome";
    }
}