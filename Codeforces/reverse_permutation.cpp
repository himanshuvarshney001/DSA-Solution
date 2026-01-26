#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int size,left=-1,right=-1;
        cin>>size;
        vector<int> arr(size);
        for (int i = 0;i<size;i++)
        {
            cin >> arr[i];
        }
        int temp = size;
        bool flag = true;
        for (int i = 0; i < size;i++)
        {
            if(arr[i]!=temp&&flag)
            {
                left = i;
                flag = false;
            }
            if(flag)
            temp--;
            if(!flag && arr[i]==temp)
            {
                right = i;
                break;
            }
            
        }
        if(left>=0 && right>=0)
        {
            reverse(arr.begin() + left, arr.begin() + right+1);
        }
        for (int i = 0; i < arr.size();i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}