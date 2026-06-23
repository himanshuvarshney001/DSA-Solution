#include<bits/stdc++.h>
using namespace std;
class base{
    public:
    void display()
    {
        cout << "Base class" << endl;
    }
    // int add(int a)
    // {
    //     return a + 8;
    // }
};
class derived:public base{
    public:
    void display()// this is function overriding in method overriding method signature is must be same.
    {
        cout << "Derived class";
    }
    // int add(int a,int b) 
    // {
    //     return a + b;
    // }
    // this method overloading at a time of calling we can call only derived class function add.if can call add with single argument that is will generate error but this is not good practice.
    // because it find bind with subroutine at the time of compile time but in case you make the base class add funciton virtual so it is bind with subroutine at runtime so it not generate error.
};
int main()
{
    derived obj;
    obj.display();
    return 0;

}