#include<iostream>
using namespace std;
class Student
{
    private: 

    string name;
    int age;
    int rollno;

  //Setter fun
public:
  void setdata(string n,int a,int r)
  {
    name=n;
    age=a;
    rollno=r;
  }

  void displaydata()
  {
    cout<<name<<" ";
    cout<<age<<" ";
    cout<<rollno<<" ";
  }
};
int main()
{

    Student S1;
    Student S2;

    S1.setdata("Rohit",20,1);
    S2.setdata("Mohit",21,11);


    S1.displaydata();
    S2.displaydata();



}