#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> p1={{2,2}};
    p1.push_back({3, 4});
    p1.push_back({4, 5});
    for(auto it:p1)
    {
        cout << it.first << " " << it.second;
        cout << endl;
    }
    return 0;
}