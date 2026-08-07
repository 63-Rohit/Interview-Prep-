#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;

    for(char row ='a';row<='e';row++)
    {
        for(int col=1;col<=n;col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
}