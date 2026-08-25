#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];

    cout<<"enter the size of an array: ";
    cin>>n;

    cout<<"Enter the elements in an array: ";
    for(int i=0;i<n;i++)
    {
      cin>>arr[i];
    }

    //finding max element in an array
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    cout<<"Maximum elemnt in an array is: "<<max;

    return 0;

}