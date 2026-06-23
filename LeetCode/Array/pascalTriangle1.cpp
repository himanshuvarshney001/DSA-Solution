#include <bits/stdc++.h>
using namespace std;
long long funNcR(int n, int r)
{
    long long res = 1;
    for (int i = 0; i < r; i++)
    {
        res = res * (n - i);
        res = res / (i + 1);
    }
    return res;
}
int main()
{
    cout << "This program are used to print element of pascal triangle=";
    cout << endl
         << "Enter row and column=";
    int row, col;
    cin >> row >> col;
    if (col > row || row < 0 || col < 0)
    {
        cout << "that column are not exist in that row" << endl;
        return 0;
    }
    long long result = funNcR(row - 1, col - 1);
    cout << result;
    return 0;
}