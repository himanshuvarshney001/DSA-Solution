#include<bits/stdc++.h>
using namespace std;
vector<int>  Row(int r)
{
    vector<int> row(r);
    int ans = 1;
    for (int i = 1; i <= r;i++)
    {
        row[i - 1] = ans;
        ans = ans * (r - i) / i;
    }
    return row;
}
int main()
{
    cout << "How many no of row=";
    // cout << endl<<"Enter row and column=";
    int row;
    cin >> row;
    vector<vector<int>> result;
    for (int i = 1; i <= row; i++)
    {
        vector<int> temp;
        temp=Row(i);
        result.push_back(temp);
    }
        cout << endl;
    return 0;
}