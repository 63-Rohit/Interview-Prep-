//Find sum of all even and odd numbers seperately 

// Enter the size of array: 6
// Enter the elements: 10 5 8 3 7 2

// Sum of even numbers: 20
// Sum of odd numbers: 15

#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[100];
    cout<<"Enter the size of array: ";
    cin>>n;

    cout<<"Enter the elements in an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int evensum=0;
    int oddsum=0;

    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            evensum=evensum+arr[i];
        }
        else{
            oddsum=oddsum+arr[i];
        }
    }

    cout<<evensum;
    cout<<endl;
    cout<<oddsum;

    return 0;
}