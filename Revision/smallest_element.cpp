#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[n];

    cout<<"Enter the size of an array: ";
    cin>>n;

    cout<<"Enter the elements in an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //finding samllest element in an array
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<"Minimum elemnt is: "<<min;
    

    return 0;


}