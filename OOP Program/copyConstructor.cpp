#include <bits/stdc++.h>
using namespace std;
class class1
{
public:
    int x;
    int y;
    class1(int a, int b)
    {
        x = a;
        y = b;
    }
    void display()
    {
        cout << "Hanji kaise ho" << endl;
        cout << x << " " << y << endl;
    }
    class1(class1 &cop)
    {
        cout << "Ho gya copy"<<endl;
        x = cop.x;
        y = cop.y;
    }
};
int main()
{
    class1 obj(2, 3);
    class1 cop = obj;
    cop.display();
    return 0;
}