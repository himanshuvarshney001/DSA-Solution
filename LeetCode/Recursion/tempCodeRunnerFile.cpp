void sum(int row,int col,vector<vector<int>> &a,vector<vector<int>> &b)
{
    if(row==a.size()-1 && col==a[0].size()-1)
    return;
    if(col==a[0].size())
    row++;
    a[row]=a[row][col]+b[row][col];
    sum(row,col+1,a,b);
}