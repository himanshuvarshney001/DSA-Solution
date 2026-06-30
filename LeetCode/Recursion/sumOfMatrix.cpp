#include<iostream>
#include<vector>
using namespace std;
void sum(int row,int col,vector<vector<int>> &a,vector<vector<int>> &b)
{
    if(row==a.size()-1 && col==a[0].size())
    return;
    if(col==a[0].size())
    {row++;
        col=0;
    }
    a[row][col]=a[row][col]+b[row][col];
    sum(row,col+1,a,b);
}
int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    vector<vector<int>> b(n, vector<int>(m));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> b[i][j];
        }
    }

    sum(0, 0, a, b);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}