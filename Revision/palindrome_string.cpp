#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"enter string: ";
    cin>>str;

    string original=str;
    int i=0;
    int j=str.size()-1;
    
    while(i<j)
    {
        swap(str[i],str[j]);
        i++;
        j--;
    }

    if(original==str)
    {
        cout<<"Palindrome string ";

    }
    else{
        cout<<"Not Palindrome ";
    }
    return 0;
}