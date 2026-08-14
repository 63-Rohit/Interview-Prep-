//Binary Search is an efficient searching algo that divides a sorted array into two halves until the desired element is found.

#include<iostream>
using namespace std;

int binarySearch(int arr[],int key, int  n)    
{
    int low=0;
    int high=n-1;

    while(low<=high)
    {
        int mid=(low+high)/2;

        
            if(arr[mid]==key)
            {
                return mid;
            }
            else if(arr[mid]<key)
            {
                low=mid+1;//move to left side 
            }
            else{
                high=mid-1;//move to right side 
            }
        }
        return -1;//key not found 
    }


    int main()
    {
        int n;
        int arr[100];
        cout<<"Enter no of elements in an array: ";
        cin>>n;
    
        cout<<"Enter elements in an array: ";
        for(int i=0;i<n;i++)
        {
           cin>>arr[i];
        }

        int key;
        cout<<"Enter the key: ";
        cin>>key;

        cout<<binarySearch(arr,key,n);
    
    }

    // ⏱ Time Complexity
// Case	Complexity
// Best	O(1)
// Average	O(log n)
// Worst	O(log n)