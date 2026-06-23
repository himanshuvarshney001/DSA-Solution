#include <bits/stdc++.h>
using namespace std;
int maxArea(vector<int> &height)
{
    int i = 0, j = height.size() - 1;
    int sum = 0;
    int capacity = 0;
    int ans = 0;
    while (i < j)
    {
        int cap = 0;
        if (height[i] < height[j])
        {
            cap = height[i] * (j - i + 1);
            if (cap > capacity)
            {
                ans = (j - i) * height[i];
                capacity = cap;
            }
            i++;
        }
        else if (height[i] > height[j])
        {
            cap = height[j] * (j - i + 1);
            if (cap > capacity)
            {
                ans = (j - i) * height[j];
                capacity = cap;
            }
            j--;
        }
        else
        {
            cap = height[j] * (j - i + 1);
            if (cap > capacity)
            {
                ans = (j - i) * height[i];
                capacity = cap;
            }
            j--;
            i++;
        }
    }
    return ans;
}
int main()
{
    int size;
    cout << "Enter the size of the array=";
    cin >> size;
    vector<int> Height(size);
    for (int i = 0; i < size; i++)
    {
        cin >> Height[i];
    }
    int result = maxArea(Height);
    cout << result;
    return 0;
}