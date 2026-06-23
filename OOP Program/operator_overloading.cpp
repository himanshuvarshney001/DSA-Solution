#include<bits/stdc++.h>
using namespace std;
class Complex{
    private:
        int img, real;
    public:
        Complex()
        {

        }
        Complex(int a,int b)
        {
            real = a;
            img = b;
        }
        void show()
        {
            cout << real << "+" << img << "i" << endl;
        }
        Complex operator-(Complex &);
        friend Complex operator+ (Complex &, Complex &);
};
Complex Complex::operator-(Complex &a)
{
    Complex temp;
    temp.img = this->img - a.img;
    temp.real = this->real - a.real;
    return temp;
}
Complex operator+ (Complex &a,Complex &b)
{
    Complex temp;
    temp.img = a.img + b.img;
    temp.real = a.real + b.real;
    return temp;
}
int main()
{
    Complex obj1(2, 3), obj2(2, 3), addition,subtraction;
    addition = obj1 + obj2;
    subtraction = obj1.operator-(obj2); // same as subtraction = obj1-obj2;
    
    return 0;
}

