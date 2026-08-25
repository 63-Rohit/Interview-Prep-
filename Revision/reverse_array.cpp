#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cout<<"Enter the size of an array: ";
    cin>>n;

    cout<<"Enter the elements in an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //Reversing an array
int low=0;
int high=n-1;
while(low<high)
{
    swap(arr[low],arr[high]);
    low++;
    high--;

}
cout<<"After reversing: ";
for(int i=0;i<n;i++)    
{
    cout<<arr[i]<<" ";
}
return 0;

}