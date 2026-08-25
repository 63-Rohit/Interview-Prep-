#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];

    cout<<"Enter size of an array: ";
    cin>>n;

    cout<<"Enter the elements in an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //Sum of elements of an array

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    cout<<sum;

    return 0;

}