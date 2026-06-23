#include<bits/stdc++.h>
using namespace std;
class matrix{
    private:
        int *arr;
        int size;
    public:
        matrix(int *a,int size)
        {
            arr = a;
            this->size = size;
        }
        void displayMatrix()
        {
            for (int i = 0; i < size;i++)
            {
                cout << arr[i] << " ";
            }
        }
        friend matrix operator+(matrix &,matrix &);
};
matrix operator+(matrix &a,matrix &b)
{
    int *add = new int[5];
    matrix result(add, 5);
    for (int i = 0; i < 5;i++)
    {
        result.arr[i] = a.arr[i] + b.arr[i];
    }
    return result;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int arr1[] = {1, 2, 3, 4, 5};
    matrix obj(arr, 5);
    // obj.displayMatrix();
    matrix obj1(arr1, 5);
    matrix result = obj1 + obj;
    result.displayMatrix();
    return 0;
}