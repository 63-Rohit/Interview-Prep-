#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cout<<"Enter the size of an array : ";
    cin>>n;


    cout<<"Enter the elements in an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    cout<<"Array before reversing: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

  cout <<endl; 

   cout<<"Array after reversing: ";
   for(int i=n-1;i>=0;i--)
   {
    cout<<arr[i]<<" ";
   }
    return 0;
}