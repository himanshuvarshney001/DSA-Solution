#include<bits/stdc++.h>
using namespace std;
template<typename T>
T search(T arr[],int size,T key)
{
    for (int i = 0; i < size;i++)
    {
        if(key==arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int size = 4;
    int arr[]={10, 20, 30, 40};
    int key = 20;
    int result = search(arr,size ,key);
    cout << result;
    return 0;
}