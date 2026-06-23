#include<bits/stdc++.h>
using namespace std;
class grandpa{
    public:
    grandpa()
    {
        cout << "Class is initilized" << endl;
    } 
    void display()
    {
        cout << "Base class";
    }
};
class son1 :public grandpa{
    public: 
    son1()
    {
        cout << "son1 class is initilized" << endl;
    }
    void display()
    {
        cout << "son1 class" << endl;
    }
};
class son2: public grandpa{
    public: son2()
    {
        cout << "son2 class is initilized" << endl;
    }
    void display(){
        cout << "Son2 class" << endl;
    }
};
class grandSon: public son1,public son2{
    public:
    grandSon()
    {
        cout << "Grand son class is initilized" << endl;
    }
};
int main()
{
    grandSon obj1;
    obj1.son1::display();
    return 0;
}