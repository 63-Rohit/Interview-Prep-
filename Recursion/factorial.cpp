#include<iostream>
using namespace std;

int factorial(int n)
{

    //Base Case
    if(n==1||n==0)
    {
        return 1;
    }

return n*factorial(n-1);//recursive call 

}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    cout<<factorial(n);

    return 0;

}