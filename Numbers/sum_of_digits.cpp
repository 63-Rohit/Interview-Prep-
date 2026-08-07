// Sum of Digits

// Input ->786

// Output->21



#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n: ";
    cin>>n;
  int sum=0;
    while(n>0)
    {
        int rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    cout<<sum;
}