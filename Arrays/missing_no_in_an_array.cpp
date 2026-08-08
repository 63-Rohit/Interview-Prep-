#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];

    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the elements in an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum=0;
    int sum1=0;
    int miss_no;
    for(int i=0;i<n-1;i++)
    {
        sum=sum+arr[i];
    }

    for(int i=1;i<=n;i++)
    {
        sum1=sum1+i;

    }

    miss_no=sum1-sum;

    cout<<"Misisng no in an array is: "<<miss_no;

    return 0;
}