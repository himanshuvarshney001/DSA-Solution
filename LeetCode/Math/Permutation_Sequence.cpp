#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cout << "Enter the value of n";
    cin>>n;
    string str = "";
    cout<<"Enter the value of k";
    cin>>k;
    while (n)
    {
        str = str + to_string(n);
        n--;
    }
    sort(str.begin(), str.end());
    // cout<<str<<" ";
    k--;
    while (next_permutation(str.begin(), str.end()) && k-1 )
    {
        k--;
    }
    cout<<str;
    
}