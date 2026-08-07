//Bubble sort is a comparison based sorting algo where each adjacent elements are compared and swapped if they are in a wrong order and After each pass the largest element move to its correct position.


#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "enter elements in an array: ";
    for (int i = 0; i<=n-1; i++)
    {
    cin >> arr[i];
    }

    //outer loop
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            //Sometimes interviewers ask why n-i-1 is used.
// Answer:

// Because after every pass the largest element reaches its correct position at the end of the array, so we reduce the comparison range.
            if(arr[j]>arr[j+1])
            {
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
}

// ⏱ Time Complexity
// Case	Complexity
// Best Case	O(n)
// Average Case	O(n²)
// Worst Case	O(n²)