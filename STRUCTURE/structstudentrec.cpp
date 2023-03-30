#include<iostream>
using namespace std;

struct student
{
    int roll;
    char name[20];
    char branch[20];
    long phone;
};
int main()
{
    struct student s1,s2;
    cout<<"enter the roll number, name, branch and phone number of the student 1: ";
    cin>>s1.roll>>s1.name>>s1.branch>>s1.phone;
    cout<<"enter the roll number, name, branch and phone number of the student 2: ";
    cin>>s2.roll>>s2.name>>s2.branch>>s2.phone;

    cout<<"student 1 record;-"<<endl;
    cout<<"roll number: "<<s1.roll<<endl;
    cout<<"name: "<<s1.name<<endl;
    cout<<"branch: "<<s1.branch<<endl;
    cout<<"phone number: "<<s1.phone<<endl<<endl;

    cout<<"student 2 record;-"<<endl;
    cout<<"roll number: "<<s2.roll<<endl;
    cout<<"name: "<<s2.name<<endl;
    cout<<"branch: "<<s2.branch<<endl;
    cout<<"phone number: "<<s2.phone<<endl<<endl;

    return 0;

}    

