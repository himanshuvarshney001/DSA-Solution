#include<bits/stdc++.h>
using namespace std;
class one{
    private:
    int a;
    public:
    one(int num)
    {
        a = num;
    }
    one* compare(one &two)
    {
        if(two.a>this->a)
        {
            return &two;
        }
        else{
            return this;
        }
    }
    void display()
    {
        cout << a<<endl;
    }
};
int main()
{
    one obj(4);
    one ob(5);
    one *ptr = obj.compare(ob);
    ptr->display();
}