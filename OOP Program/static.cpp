#include<iostream>
using namespace std;
/*

static is keyword
1) static local variable - C & C++
2) static member variable - C++
3) static member function - C++
*/

/*
1) Static local variable
- Life: till the end of the program
- Scope: scope is limited in the block (or function)
- Default Value: 0

*/
/*
void f1()
{
    int x=0; //local variable
    static int y; //static local variable
    x++;
    y++;
    cout<<"x="<<x<<" y="<<y<<endl;
}
int main()
{
    f1();
    f1();
    f1();
    return 0;
}
*/

/*
2) static member variables

- static member variable needs to define outside the class body
    datatype ClassName::staticVariable;

- There is only one copy of static member variable in the memory for the entire class

- static member variables are not related to any specific object of the class, but object can access them via dot operator.
    object.staticVariable

- static member variable == class variable

How to access static member variables?
1) objectName.staticMemberVariable
2) ClassName::staticMemberVariable (prefer)

*/

class Item
{
    public:
        int a,b; //Instance Member Variables
        static int k; //static member variable

};
int Item::k;
void f1()
{
    Item i1,i2;
    i1.a=5;
    i1.k=2;
    cout<<i2.a<<endl;
    cout<<i2.k;
}
void f2()
{
    Item::k=2;
    cout<<Item::k;
}
int main()
{
    f2();
    cout<<endl;
    return 0;
}

/*
Static Member functions

- static member functions are qualified with the keyword static
    static returnType functionName(arg){ }

- non member functions can never be static

-static member function can only access static members of the class
-Instance member function can access instance members and static members both

- A member function, not performing object specific job, then function should be static member function

*/
// class Item
// {
//     private:
//         int a,b; //Instance Member Variables
//         static int k; //static member variable
//     public:
//         void set_a(int x) { a=x;}
//         void set_b(int y) { b=y;}
//         int get_a() { return a;}
//         int get_b() { return b;}
//         static void set_k(int data) { k=data;}
//         static int get_k() { return k;}
// };
// int Item::k;
// void f1()
// {
//     Item i1,i2;
//     i1.set_a(5);
//     i1.set_b(6);
//     cout<<i1.get_a()<<" "<<i1.get_b()<<endl;
//     cout<<i2.get_a()<<" "<<i2.get_b()<<endl;
    
//     i1.set_k(2);
//     cout<<i2.get_k();
// }
// void f2()
// {
//     Item::set_k(2);
//     cout<<Item::get_k();
// }
// int main()
// {
//     f2();
//     cout<<endl;
//     return 0;
// }