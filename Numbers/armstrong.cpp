// // Armstrong Number

// // Input-->153

// // Output-->Armstrong


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;


    int arm=0;
    int temp=n;
    while(n>0)
    {
        int rem=n%10;
        n=n/10;
        arm=(rem*rem*rem)+arm;
    }
      if(arm==temp)
      {
        cout<<"Armstrong no";
      }
      else{
        cout<<"No";
      }
}