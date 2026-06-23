#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10, 20, 30, 40, 20, 40};
    auto it = l.begin();
    it = l.erase(it);
    l.remove(40);
    for(int i:l)
    {
        cout << i << " ";
    }
    return 0;
}