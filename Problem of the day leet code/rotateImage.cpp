#include <bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>> &matrix)
{
    for (int i = 0; i < matrix.size();i++)
    {
        for (int j = 0; j <= i;j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    for (int i = 0; i < matrix.size();i++)
    {
        for (int j = 0; j <matrix.size()/2;j++)
        {
            swap(matrix[i][j], matrix[i][matrix.size()-j-1]);
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of the matrix=";
    cin >> size;
    vector<vector<int>> vect(size,vector<int>(size));
    cout << "Enter the element of matrix" << endl;
    for (int i = 0; i < size;i++)
    {
        for (int j = 0; j < size;j++)
        {
            cin >> vect[i][j];
        }
    }
    rotate(vect);
    for (int i = 0; i < size;i++)
    {
        for (int j = 0; j < size;j++)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}