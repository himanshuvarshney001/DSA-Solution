#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
        int real;
        int img;
    public:
    void set_data(int a,int b)
    {
        real = a;
        img = b;
    }
    void get_data()
    {
        cout << real << "+" << img << "i" << endl;
    }
    Complex add(Complex);
};
Complex Complex::add(Complex a)
{
    Complex obj;
    obj.real = this->real + a.real;
    obj.img = this->img + a.img;
    return obj;
}
int main()
{
    Complex obj1,obj2,result;
    obj1.set_data(3, 4);
    cout << "First complex number=" << endl;
    obj1.get_data();
    obj2.set_data(4, 5);
    cout << "Second complex number=" << endl;
    obj2.get_data();
    cout << "Sum of Complex number=" << endl;
    result = obj1.add(obj2);
    result.get_data();
    return 0;
}