// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     cout<<"Enter value of a and b: ";
//     cin>>a>>b;

    

//     a=a+b;
//     b=a-b;
//     a=a-b;


//     cout<<"After Swap value: ";
//     cout<<a<<endl;
//     cout<<b;


// }

//Swapping with the help of third variable 

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a;
    cin>>b;

    int temp;
    temp=a;
    a=b;
    b=temp;

    cout<<a;
    cout<<endl;
    cout<<b;
}