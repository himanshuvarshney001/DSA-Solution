#include <bits/stdc++.h>
using namespace std;
template <class t>
class vect
{
    t *arr;
    int size;

public:
    vect()
    {
        arr = nullptr;
        size = 0;
    }
    vect(int m)
    {
        size = m;
        arr = new t[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = 0;
        }
    }
    void operator=(t *ptr)
    {
        for (int i = 0; i < size; i++)
        {
            arr[i] = ptr[i];
        }
    }
    vect operator+(vect &a)
    {
        vect temp;
        temp.arr = new t[size];
        temp.size = a.size;
        for (int i = 0; i < size; i++)
        {
            temp.arr[i] = this->arr[i] + a.arr[i];
        }
        return temp;
    }
    void display()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    int x[] = {1, 2, 3,4,5,7};
    int y[] = {4, 5, 6,3,4,5};
    vect<int> v1(6);
    vect<int> v2(6);
    v1 = x;
    v2 = y;
    vect<int> temp=v1+v2;

    v1.display();
    v2.display();

    temp.display();
    return 0;
}