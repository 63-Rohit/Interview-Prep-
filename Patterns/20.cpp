#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        //space

        for(int col=1;col<=n-row;col++)
        {
            cout<<"  ";
        }

        for(int col=1;col<=row;col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}