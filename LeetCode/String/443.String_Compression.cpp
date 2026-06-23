#include <bits/stdc++.h>
using namespace std;
// Space Complexity O(n)
// int compress(vector<char> &chars)
// {
//     string res = "";
//     res = chars[0];
//     char previous = chars[0];
//     int count = 0;
//     int j = 0;
//     for (int i = 0; i < chars.size(); i++)
//     {
//         if (previous == chars[i])
//         {
//             count++;
//         }
//         else
//         {
//             if (count == 1)
//             {
//                 previous = chars[i];
//             }
//             else if (count > 1)
//             {
//                 res += to_string(count);
//                 previous = chars[i];
//             }
//             count = 1;
//             res.push_back(chars[i]);
//         }
//     }
//     if (count > 1)
//         res = res + to_string(count);
//     chars.clear();
//     for (char i : res)
//         chars.push_back(i);
//     res.clear();
//     return chars.size();
// }
// space complexity O(1)
int compress(vector<char> &chars)
{
    int count = 1;
    char previous = chars[0];
    int index = 0;
    for (int i = 1; i <= chars.size(); i++)
    {
        if (i < chars.size() && chars[i] == previous)
        {
            count++;
        }
        else
        {
            if (count > 9)
            {
                string str = to_string(count);
                for (auto ch : str)
                {
                    index++;
                    chars[index] = ch;
                }
            }
            else if(count>1)
            {
                index++;
                chars[index]=char(count+'0');
            }
            if (i < chars.size())
            {
                count = 1;
                previous = chars[i];
                index++;
                chars[index] = chars[i];
            }
        }
    }
    for (int i = chars.size(); i > index + 1; i--)
        chars.pop_back();
    return chars.size();
}
int main()
{
    int size;
    cout << "Enter the size of character array=";
    cin >> size;
    vector<char> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int result = compress(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    cout << result;
    return 0;
}