//Strings are the sequence of charcaters enclosed in double quotes .
#include<iostream>
using namespace std;
int main()
{
    string str;

    cout<<"Enter the string: ";
    cin>>str; 

    int n=str.size()-1;

    for(int i=n;i>=0;i--)
    {
        cout<<str[i];
    }

}