#include <bits/stdc++.h>
using namespace std;
int minDeletionSize(vector<string> &strs)
{
    int column = strs[0].length();
    int row = strs.size();
    int count = 0;
    // bool flag = false;
    // vector<vector<char>> arr(column, vector<char>(row));
    // for (int i = 0; i < row; i++) {
    //     string str = strs[i];
    //     for (int j = 0; j < column; j++) {
    //         arr[j][i] = str[j];
    //     }
    // }
    // for (int i = 0; i < column; i++) {
    //     for (int j = 0; j < row - 1; j++) {
    //         if (arr[i][j] > arr[i][j + 1]) {
    //             flag = true;
    //         }
    //     }
    //     if (flag) {
    //         count++;
    //         flag = false;
    //     }
    // }
    // return count;
    for (int j = 0; j < column; j++)
    {
        for (int i = 0; i < row - 1; i++)
        {
            if (strs[i][j] > strs[i + 1][j])
            {
                count++;
                break;
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
