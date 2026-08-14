#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key)
{
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid=low+(high-low)/2;

        if(arr[mid]==key)
        {
            return mid;

        }
        else if(arr[mid]<key)
        {

          low=mid+1;
        }

        else{
            high=mid-1;
        }
    }

    return -1;
}
int main()
{

    int n;
    int arr[100];

    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter elements in an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key: ";
    cin>>key ;

    cout<<binarySearch(arr,n,key);

    return 0;

}