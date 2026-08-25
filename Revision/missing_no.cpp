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

    //finding missing number 
    int sum=0;
    for(int i=0;i<=n;i++)
    {
      sum=sum+i;
    }

    int sum1=0;
    for(int i=0;i<n;i++)
    {  
      
        sum1=sum1+arr[i];
        
    }

    int ans=sum-sum1;
    cout<<ans;
}