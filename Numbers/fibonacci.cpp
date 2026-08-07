// Fibonacci Series
// Input-->7

// Output--> 0 1 1 2 3 5 8

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int a=0;
    int b =1;
    int c;

    for(int i=0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }

    cout<<b;
}