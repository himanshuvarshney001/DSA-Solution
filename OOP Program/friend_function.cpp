#include<bits/stdc++.h>
using namespace std;
class class0{
    private:
        int a;
    public:
        void display()
        {
            cout << "Class0" << endl;
        }
        void add();
};
class class1{
    private:
        int a,b;
    public:
        void display()
        {
            cout << "Class1" << endl;
        }
        friend void class0::add();
};
void class0::add()
{
    cout << "Friend function of class 1"<<endl;
}
int main()
{
    class1 obj;
    obj.display();
    class0 obj1;
    obj1.add();
}