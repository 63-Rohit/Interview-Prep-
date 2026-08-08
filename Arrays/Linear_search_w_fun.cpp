#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int key)
{

  for(int i=0;i<n;i++)
  {

      if(arr[i]==key)
      {

        return i; //key found at index i
    }

}  
return -1;//key not found
}

int main()
{

    int n;
    int arr[100];
    int key;

    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the elements in an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter the key : ";
    cin>>key;

    cout<<linearSearch(arr,n,key);

}