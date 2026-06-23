#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the element=";
    cin >> n;
    string res = to_string(n);
    if (!next_permutation(res.begin(), res.end()))
        {
            cout<<"-1";
            return 0;
        }
    if (stoll(res) > INT_MAX || stoll(res) < INT_MIN)
        {
            cout<<"-1";
            return 0;
        }
        
    cout<<stoi(res);
}