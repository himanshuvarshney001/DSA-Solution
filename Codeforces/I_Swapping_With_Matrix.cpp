#include <bits/stdc++.h>
using namespace std;
void change(vector<vector<int>> &matrix, int row, int column)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        swap(matrix[row - 1][i], matrix[column - 1][i]);
    }
    for (int i = 0; i < matrix.size();i++)
    {
        swap(matrix[i][row - 1], matrix[i][column - 1]);
    }
}
int main()
{
    int size;
    cin >> size;
    int row, column;
    cin >> row >> column;
    vector<vector<int>> vect(size, vector<int>(size));
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> vect[i][j];
        }
    }
    change(vect, row, column);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}