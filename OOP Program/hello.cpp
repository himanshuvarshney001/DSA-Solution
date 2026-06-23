#include<bits/stdc++.h>
using namespace std;
const int size = 3;
template<class t>
class vect{
    t *arr;
    public:
    vector()
    {
        arr = new t[size];
        for (int i = 0; i < size;i++)
        {
            arr[i] = 0;
        }
    }
    void display()
    {
        for (int i = 0; i < size;i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    vect<int> v1;
    vect<int> v2;
}