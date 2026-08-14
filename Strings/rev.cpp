#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter string: ";
    cin>>str;

    int i=str.size()-1;
    int j=0;

    while(i>j)
    {
        swap(str[i],str[j]);
        i--;
        j++;
    }

    cout<<str[i];
}