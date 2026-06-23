#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size;i++)
    {
        cin >> arr[i];
    }
    int count1 = 0;
    for (int i = 0; i < size;)
    {
        if(i<size &&arr[i]<0)
        {
            count1++;
        }
        i++;
        if(i<size && arr[i]>0)
        {
            count1++;
        }
        i++;
    }
    int count2 = 0;
    for (int i = 0; i < size;)
    {
        if(i<size && arr[i]>0)
        {
            count2++;
        }
        i++;
        if(i<size && arr[i]<0)
        {
            count2++;
        }
        i++;
    }
    int result=count1 > count2 ? count2 : count1;
    cout << result;
    return 0;
}