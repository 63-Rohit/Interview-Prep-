#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age;
    int rollno;

    //Constructor
    Student(string name,int age,int rollno)
    {
        this->name=name;
        this->age=age;
        this->rollno=rollno;
    }

    void display()
    {
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<rollno<<endl;
    }
};
int main()
{

    Student S1("Rohit",20,1);
    Student S2("Mohit",21,2);

    S1.display();
    S2.display();



}