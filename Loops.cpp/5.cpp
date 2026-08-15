//Print fibonacci series 
// 0 1 1 2 3 5 8 13 21 ...

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int a=0;
    int b=1;
    int c;

    for(int i=1;i<n;i++)
    {
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}

