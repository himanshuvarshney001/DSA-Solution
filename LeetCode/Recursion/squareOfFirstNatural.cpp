#include<bits/stdc++.h>
using namespace std;
void square(int n)
{
    if(n==0)
        return;
    square(n - 1);
    cout << n * n<<endl;
}
int main()
{
    int n;
    cout << "Enter natural number=";
    cin>>n;
    square(n);
    return 0;
}