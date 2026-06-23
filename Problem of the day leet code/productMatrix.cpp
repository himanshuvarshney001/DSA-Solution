#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> constructProductMatrix(vector<vector<int>> &grid)
{

    int product = 1;
    vector<vector<int>> result(grid.size(), vector<int>(grid[0].size()));
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            product = (product * grid[i][j]) % 12345;
        }
    }
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j<result[i].size(); j++)
        {
            result[i][j] = product / grid[i][j];
        }
    }
    return result;
}
int main()
{
    int m, n;
    cout << "Enter the size of the matrix=";
    cin >> m >> n;
    vector<vector<int>> vect(m, vector<int>(n));
    cout << "Enter the element of matrix" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vect[i][j];
        }
    }
    vector<vector<int>> result = constructProductMatrix(vect);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}