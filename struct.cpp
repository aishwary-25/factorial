#include<iostream>
using namespace std;

struct Student
{
    char name[50];
    int roll;
    float marks;
};
int main()
{
    struct Student s1;
    strcpy(s1.name, "Rahul");
    s1.roll=101;
    s1.marks=87.5;
    cout<<
}