#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the elements in an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
cout<<"Enter the key: ";
cin>>key;
    bool found =false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            cout<<"element found at index"<<i;
            found=true;
            break;
        }
    }

    // if(!found)
      if(found==false)
      { 
          cout<<"Element not found ";
        }

    return 0;

}