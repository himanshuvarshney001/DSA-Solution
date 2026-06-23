#include <bits/stdc++.h>
using namespace std;
int minDeletionSize(vector<string> &strs)
{
    int column = strs[0].length();
    int row = strs.size();
    int count = 0;

    vector<bool> sorted(row - 1, false);

    for (int j = 0; j < column; j++)
    {
        bool deleteCol = false;

        for (int i = 0; i < row - 1; i++)
        {
            if (!sorted[i] && strs[i][j] > strs[i + 1][j])
            {
                deleteCol = true;
                count++;
                break;
            }
        }

        if (deleteCol)
            continue;

        for (int i = 0; i < row - 1; i++)
        {
            if (!sorted[i] && strs[i][j] < strs[i + 1][j])
            {
                sorted[i] = true;
            }
        }
    }
    return count;
}
int main()
{
    int size, strsize;
    cout << "Enter the size of array=";
    cin >> size;
    vector<string> str(size);
    for (int i = 0; i < size; i++)
    {
        cin >> str[i];
    }
    int result = minDeletionSize(str);
    cout << result;
    return 0;
}
