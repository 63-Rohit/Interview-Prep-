#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;

    int arr[100];
    cout<<"Enter the elements in an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int i=0;
    int j=n-1;

    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    cout<<"Reverse array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }   
}