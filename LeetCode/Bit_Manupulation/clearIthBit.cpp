#include<iostream>
using namespace std;
int swap(int a, int ith)
{
    // using left shift operator
    
    return (a&(~(1<<ith)));
    
}
int main()
{
    int a, ith;
    cout << "Enter number=";
    cin >> a >> ith;
    int flag = swap(a, ith);
    cout <<  flag;
    return 0;
}