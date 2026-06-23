#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> arr = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};
    int test;
    cin >> test;
    char element;
    
    while(test--)
    {
        long long sum = 0;
        vector<vector<char>> input;
        for (int i = 0; i < 10;i++)
        {
            for (int j = 0; j < 10;j++)
            {
                cin >> element;
                if(element=='X')
                {
                    sum = sum +arr[i][j];
                }
            }
        }
        cout << sum << endl;
    }
}   