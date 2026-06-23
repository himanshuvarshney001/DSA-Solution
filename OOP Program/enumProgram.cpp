// what is enum in cpp? define an enumeration grade{A,B,C,D,F}. Create a class student that includes name marks and grade (enum). write a constructor that 1. Accepts name and marks and 2. Automatically assigns the grade using conditions. Display the student details along the grage.
// Enum is group of names given to integer constants, which makes the program easy to read and maintain.
#include <bits/stdc++.h>
using namespace std;
enum Grade
{
    A,
    B,
    C,
    D,
    F
};
class Student
{
public:
    string name;
    float marks;
    Grade grade;
    Student(string name, float marks)
    {
        this->name = name;
        this->marks = marks;
        if (marks >= 90)
            grade = A;
        else if (marks >= 80)
            grade=B;
        else if (marks >= 70)
            grade=C;
        else if (marks >= 60)
            grade=D;
        else if (marks >=50)
            grade=F;
    }
    void display()
    {
        cout << "Name of studends=" << name << endl;
        cout << "Grade"<<grade<< endl;// print grade in 0,1,2,,3,4,5 formsT
    }
};
int main()
{
    Student obj("Hiamnshu Varsheny", 90);
    obj.display();
    return 0;
}