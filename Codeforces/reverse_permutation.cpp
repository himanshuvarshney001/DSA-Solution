#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin >> size;
    while (size--)
    {
        int arr_size;
        cin >> arr_size;
        string str = "";
        vector<int> arr(arr_size);
        for (int i = 0; i < arr_size; i++)
        {
            cin >> arr[i];
            str += char(arr[i] + '0');
        }
        string temp = str;
        sort(temp.begin(), temp.end());
        do
        {
            if(temp>str)
            {
                str = temp;
            }
        } while (next_permutation(temp.begin(), temp.end()));
        
        for(char i:str)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}