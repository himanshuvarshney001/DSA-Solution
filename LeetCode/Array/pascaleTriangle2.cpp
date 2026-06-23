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
    cout << "This program are used to print element of pascal triangle=";
    cout << endl<<"Enter row and column=";
    int row;
    cin >> row;
   
    vector<int> result = Row(row);
    for(int i:result)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}