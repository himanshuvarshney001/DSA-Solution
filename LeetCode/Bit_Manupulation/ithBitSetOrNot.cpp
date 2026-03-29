#include <bits/stdc++.h>
using namespace std;
bool swap(int &a, int ith)
{
    // using left shift operator
    if (a & (1 << ith) != 0)
        return true;
    else
        return false;
    
    // Using right shift operator
    if(a>>ith& 1!=0)
        return true;
    else
        return false;
        
}
int main()
{
    int a, ith;
    cout << "Enter number=";
    cin >> a >> ith;
    bool flag = swap(a, ith);
    cout << boolalpha << flag;
    return 0;
}