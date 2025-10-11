#include <bits/stdc++.h>
using namespace std;
int main()
{
    string val = "12378", val2 = "24";
    string result = "";
    int first = 0;
    // string res=to_string(stoi(val)*stoi(val2)); This is correct for small number but not for large number
    // So the actual solution
    if (val == "0" || val2 == "0")
    {
        cout << "Multiply is zero";
    }
    else
    {
        reverse(val.begin(), val.end());
        reverse(val2.begin(), val2.end());
        vector<int> arr(val.size() + val2.size(), 0);
        for (int i = 0; i < val2.size(); i++)
        {
            for (int j = 0; j < val.size(); j++)
            {
                arr[i + j] += (val2[i] - '0') * (val[j] - '0');
            }
        }
        reverse(arr.begin(), arr.end());
        for (int i = arr.size() - 1; i > 0; i--)
        {
            int carry = arr[i] / 10;
            arr[i] %= 10;
            arr[i - 1] += carry;
        }
        while (first <= val2.size() + val.size() && arr[first]==0)
        first++;
        for(int i=first;i<arr.size();i++)
        {
            result=result+to_string(arr[i]);
        }
    }
    cout<<result;
    
}
