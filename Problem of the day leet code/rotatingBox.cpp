#include <bits/stdc++.h>
using namespace std;
vector<vector<char>> rotateTheBox(vector<vector<char>> &boxGrid)
{
    vector<vector<char>> result(boxGrid[0].size(), vector<char>(boxGrid.size()));
    for (int i = 0; i < boxGrid[0].size(); i++)
    {
        for (int j = 0; j < boxGrid.size(); j++)
        {
            result[i][j] = boxGrid[boxGrid.size() - 1 - j][i];
        }
    }
    for (int i = 0; i < result[0].size(); i++)
    {
        int empty = result.size() - 1; // bottom-most position

        for (int j = result.size() - 1; j >= 0; j--)
        {
            if (result[j][i] == '*')
            {
                empty = j - 1; // reset above obstacle
            }
            else if (result[j][i] == '#')
            {
                swap(result[j][i], result[empty][i]);
                empty--;
            }
        }
    }
    return result;
}
int main()
{
    int row, column;
    cout << "Enter row and column respectively=" << endl;
    cin >> row >> column;
    vector<vector<char>> input(row, vector<char>(column));
    cout << "Enter the elment of matrix=" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cin >> input[i][j];
        }
    }
    vector<vector<char>> result(column, vector<char>(row));
    result = rotateTheBox(input);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}