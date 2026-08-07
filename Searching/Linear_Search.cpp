// Linear Search is a searching algo in which elements are checked one by one until the desired element is found.

#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cout<<"Enter the no of elements in an array: ";
    cin>>n;

    cout<<"Enter the elements in an array: ";
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key: ";
    cin>>key;
    bool found=false;
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]==key)
        {
           cout<<"Element found at index: "<< i;
           found=true;
           break;
        }
    }
    if(found==false)//key not found 
    cout<<"Element not found ";

}

// Time Complexity:
//Worst Case:0(n)
//Best Case:0(1)


// Space Complexity
// Space Complexity = O(1)