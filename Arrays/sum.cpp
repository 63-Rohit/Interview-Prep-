// Question 1: Sum of an Array (Reported)

// Problem Statement:
// Given an integer N, followed by N integers, find the sum of all the elements.

// Input
// 5
// 10 20 30 40 50
// Output
// 150
// Explanation

// Sum = 10 + 20 + 30 + 40 + 50 = 150


#include<iostream>
using namespace std;

int sum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {  
      sum=sum+arr[i];
    }
    return sum;
}
int main()
{
     int n;
     cout<<"Enter the size of an array : ";
     cin>>n;
     
     int arr[100];
     cout<<"Enter the elements in an array : ";
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
     }

     cout<<sum(arr,n);
}