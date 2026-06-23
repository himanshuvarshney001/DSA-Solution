#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the no of pairs=";
    cin >> size;
    vector<pair<int, int>> cordinates(size);
    cout << "Enter the cordinates=";
    for (int i = 0; i < size;i++)
    {
        int x, y;
        cin>>x;
        cin >> y;
        cordinates[i] = {x, y};
    }
    long long kSquare = INT_MAX;
    pair<int, int> close_cordinates;
    for (int i = 0; i < size;i++)
    {
        int x = cordinates[i].first;
        int y = cordinates[i].second;
        if(kSquare>x*x+y*y)
        {
            close_cordinates = {x, y};
            kSquare = x * x + y * y;
        }
    }
    cout << "Closest cordinates is=" << "(" << close_cordinates.first << "," << close_cordinates.second << ")" << endl;
    return 0;
}