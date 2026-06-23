#include<bits/stdc++.h>
using namespace std;
class base
{
    public:
    virtual void Base()
    {
        cout << "Base class invoke"<<endl;
    }
};
class derived:public base{
    public:
    void Base()
    {
        cout << "Base class override"<<endl;
    }
};
int main()
{
    base obj1;
    derived obj2;
    obj1.Base();
    obj2.Base();
    base *ptr1,*ptr2;
    ptr1 = &obj1;
    ptr2 = &obj2;
    ptr1->Base();
    ptr2->Base();
    return 0;
}