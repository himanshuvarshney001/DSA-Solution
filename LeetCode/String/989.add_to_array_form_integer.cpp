#include <bits/stdc++.h>
using namespace std;
vector<int> addToArrayForm(vector<int> &num, int k)
{
    reverse(num.begin(), num.end());
    int i = 0;
    while (k)
    {
        int digit = k % 10;
        if(i<num.size())
         num[i] = num[i] + digit;
        else
         num.push_back(digit);
        i++;                                        
        k = k / 10;
    }
    for (i = 0; i < num.size() - 1; i++)
    {
        int carry = num[i] / 10;
        num[i] = num[i] %10;
        num[i + 1] = num[i + 1] + carry;
    }
    if (num[num.size() - 1] >= 10)
    {
        int number = num[num.size() - 1];
        num.pop_back();
        while (number)
        {
            int digit = number % 10;
            num.push_back(digit);
            number = number / 10;
        }
    }
    reverse(num.begin(), num.end());
    return num;
}
int main()
{
    int size, num;
    cout << "Enter the size of array=";
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter number that you want add=";
    cin >> num;
    vector<int> result = addToArrayForm(arr, num);
    for (auto i : result)
        cout << i << " ";
    return 0;
}